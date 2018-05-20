matrix=[[1,2,3,4,5,6,7,8],
	[1,2,3,4,5,6,7,8],
	[1,2,3,4,5,6,7,8],
	[1,2,3,4,5,6,7,8],
	[1,2,3,4,5,6,7,8],
	[1,2,3,4,5,6,7,8],
	[1,2,3,4,5,6,7,8],
	[1,2,3,4,5,6,7,8]]
new=[]
print('ENTER 2x2 MATRIX : ')
print(' ')

for i in range(4):
	new.append(raw_input('ENTER %d ELEMENT OF MATRIX : '%(i+1)))

for i in range(len(matrix)):
	for j in range(len(matrix[i])):
		if (matrix[i][j] == int(new[0]) and i<7 and j<7):
			if (matrix[i][j+1] == int(new[1]) and matrix[i+1][j] == int(new[2]) and matrix[i+1][j+1] == int(new[3])):
				print('MATRIX FOUND AT : %d,%d'%(i,j))
				quit()

print('MATRIX NOT FOUND')
