#!/bin/bash

array=( `cat "file"` )
echo "Whole array : " ${array[*]}
echo "Length of Array : " ${#array[*]} 
echo "Length of Element at 3rd Index : " ${#array[2]}
