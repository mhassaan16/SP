function Is_Lower()
{
	read -p "ENTER A STRING in UPPERCASE " LINE
	echo $LINE | tr [A-Z] [a-z]
}
function Is_User_exists()
{
	echo -en "\n"
	cut -d ':' -f1 /etc/passwd | grep $USER
	echo "TRUE,User named '"$USER"' exists in /etc/passwd"
}
function Is_User_root
{
	number=`echo $EUID`
	if [ $number -eq 0 ]
	then
		echo -en "\nUSER IS ROOT USER\n"
	else
		echo -en "\nUSER IS NOT ROOT USER\n"
	fi
}
#main
Is_Lower
Is_User_exists
Is_User_root
