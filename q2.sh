#!/bin/bash
temp=$2
set `ls -li $1`
echo " OWNER : " $4
echo " GROUP : " $5
echo " PERMISSIONS : " $2
shift
echo "FILE NAME : " $9
if [ $4 = $temp ]
then 
echo "CHEATING = 0"
else
echo "CHEATING = 1"
fi
