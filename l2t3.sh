#!/bin/bash

showAllOwners()
{
	if [ $# -eq 0 ]
	then 
	echo "No argument"
	elif [ $# -gt 1 ]
	then 
	echo "Only One User Found!"
	else
	userName=$1
	for i in `ls`
	do
	set `ls -li $i`
	shift
	if [ -f $i ]
	then
	if [ $userName = $3 ]
	then
	echo "FileName:  " $9 
	echo "Owner Name :"  $3
	echo -en "\n"
	fi
	fi
	done
	fi
}

showAllOwners $@
