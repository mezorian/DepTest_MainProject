#!/bin/bash

strindex() {
	x="${1%%$2*}"
	[[ "$x" = "$1" ]] && echo -1 || echo "${#x}"
}

function extractStringBetweenStrings() {
	# get parameters
	string="$1"
	stringBefore="$2"
	stringAfter="$3"

	# get lengths
	lengthOfStringBefore=${#stringBefore}
	lengthOfString=${#string}

	# get positions
	positionOfStringBefore=$( strindex "${string}" "${stringBefore}" )
	positionOfStringAfter=$( strindex "${string}" "${stringAfter}" )

	# cut from the end of stringBefore to the beginning of stringAfter
	cutPositionStart=$((${positionOfStringBefore} + ${lengthOfStringBefore} + 1))
	cutPositionEnd=${positionOfStringAfter}
	extractedString=$(echo ${string} | cut -c ${cutPositionStart}-${cutPositionEnd})

	# output extracted string
	echo "${extractedString}"
}

cat default.xml | grep "<project name=" | while read -r line ; do
	# get all project names from default.xml
	projectName=$(extractStringBetweenStrings "${line}" '<project name="' '" remote="')
    	branch=$(extractStringBetweenStrings "${line}" 'revision="' '" />')
    	echo "projectName $projectName , branch $branch"

	# go into each project directory and repo sync dependency repos
        pushd
	cd ${projectName}
	repoURL="https://github.com/${projectName}.git"
	branch="${branch}"
	manifest="default.xml"
	repo init -u ${repoURL} -b ${branch} -m ${manifest}
	repo sync
	popd
done

