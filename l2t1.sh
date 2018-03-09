#!/bin/bash

showtable()
{

#rule1

if [ $# -lt 1 ]
then
echo "No arguments"
exit
fi

#rule2

if [ $# -gt 6 ]
then 
echo "Arguments are greater than 6"
exit
fi

#rule3
`expr $1+1 1>/dev/null 2>/dev/null`
if [ ! $? -eq 0 ]
then
echo "Wrong Arguments"
exit
fi

if [ $# -eq 1 ]
then 
t=$1
for i in `seq 1 10`
do
echo "$t * $i = `expr $t \* $i`"
done 
exit 
fi


#rule4
if [ $# -eq 3 ]
then 
if [ $2 == "-s" ]
then
for i in `seq $3 10`
do
echo "$1 * $i = `expr $1 \* $i`"
done 
exit 
fi
fi



#rule5
if [ $# -eq 3 ]
then 
if [ $2 == "-e" ]
then
for i in `seq 1 $3`
do
echo "$1 * $i = `expr $1 \* $i`"
done 
exit 
fi
fi

#rule6
if [ $# -eq 5 ]
then 
a=$1
if [ $2 == "-s" -a $4 == "-e" ]
then
for i in `seq $3 $5`
do
echo "$a * $i = `expr $a \* $i`"
done 
exit 
fi
fi

#rule7
if [ $# -eq 6 ]
then 
a=$1
if [ $2 == "-s" -a $4 == "-e" -a $6 == "-r" ]
then
for i in `seq $5 -1 $3`
do
echo "$a * $i = `expr $a \* $i`"
done 
exit 
fi
fi
}

showtable $@


