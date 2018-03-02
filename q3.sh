#!/bin/bash
unix=(Debian "Red Hat" ubuntu Suse Fedora)
echo "Elements of Unix Array : " ${unix[*]}
echo "Length Of Array : " ${#unix[*]}
echo "Length of Element on Index 2 : " ${#unix[2]}
echo  "Extract 2 Elements : " ${unix[@]:3:2}
echo "Search and Replace : " ${unix[@]/"ubuntu"/"sco unix"}

temp=(${unix[*]} "AIX" "HP-UX")

echo "Addition of element in Array : " ${temp[*]}

unset unix[1]

linux=(${unix[*]})
echo "Elements of Linux Array : " ${linux[*]}

bash=(${unix[*]} ${linux[*]})
echo "Concatenation : " ${bash[*]}

unset ${unix[*]}
unset ${linux[*]}
