str = raw_input("Enter Sentense : ");
letter = []
digits = []
for i in range(0,len(str)):
	if str[i].isdigit():
		digits.append(str[i])
	else :
		letter.append(str[i])
print("Letters : "+ len(letters)+ "Digits : " + len(digits))
