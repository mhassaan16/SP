#!/bin/bash

Runningprocess()
{
	process=$1
	set `ps -all -A | grep $process`
	if [ $? -eq 0 ]
	then
	echo "PID : " $4
	echo "PPID : " $5
	shift 5
	echo "Name : " $9
	echo "STATE : Running"
	fi
}
	bool=0
	if [ $# -eq 0 ]
	then
	echo "NO arguments"
	bool=1
	elif [ $# -gt 1 ]
	then
	echo "Invalid arguments not more than 1"
	bool=1
	elif [ $bool -eq 0 ]
	then
	count=`ps -all -A | grep $1 | wc -l`
	if [ $count -gt 0 ]
	then
	Runningprocess $1
	fi
	fi
