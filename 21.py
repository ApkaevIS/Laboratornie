x = float(input('x: '))
y= int(input('y: '))
eps = 0.0001
count = 0
while abs(y-x) > eps:
	y=(y+x/y)/2
	count= count +1
	if count==10:
		print(y)
		exit(1)
