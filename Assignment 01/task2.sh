#!/bin/bash
if [ $# -gt 1 -o $# -le 0 ]
then
	echo "Invalid Arguments"
	exit
fi
		
FILENAME=$1

cat -n $FILENAME | while read -r LINE
do
	LINENUMBER=`echo $LINE|cut -d ' ' -f1`
	REM=`expr $LINENUMBER % 2`
	if [ $REM -eq 0 ]
	then
		
		echo $LINE>>EVENLINEFILE.txt
		
	else
		echo $LINE>>ODDLINEFILE.txt
		
	fi
		
	
	
done

