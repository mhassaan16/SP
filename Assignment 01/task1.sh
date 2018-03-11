#!/bin/bash
for i in `ls`
do
	var=$i
	`mkdir ${var##*\.} 1>/dev/null 2>/dev/null`
	`mv $var ${var##*\.} 1>/dev/null 2>/dev/null`
	
done 
