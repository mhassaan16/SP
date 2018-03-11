#!/bin/bash
if [ -f $1 ]
then
	sort -u $1
else 
	echo "File Not Found"
fi
