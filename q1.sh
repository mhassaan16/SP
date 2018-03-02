#!/bin/bash

expr $1 + 0 2>/dev/null
if [  $? -eq 0 ]
then
     if [ $2 -ne 0 ]
	then
	echo "Sum of Two Numbers is : " `expr $1 + $2`
	echo "Subtraction of Two Numbers is : " `expr $1 - $2`
	echo "Multiplication of Two Numbers is : " `expr $1 \* $2`
	echo "Division of Two Numbers is : " `expr $1 / $2`
	echo "Modulas of Two Numbers is : " `expr $1 % $2`
     else
	echo "Second Number Not Equal to Zero"
fi
else	
echo "Please Enter Valid Numbers"
fi





