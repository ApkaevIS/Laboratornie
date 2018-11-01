from math import sinh
from math import atanh

print ("Выберите функцию\n 1- G = 5*(10*a*a-11*a*x+x*x)/24*a*a-49*a*x+15*x*x \n 2- F = sinh(3*a*a+7*a*x+4*x*x\n 3- Y = -atanh(30*a*a+37*a*x-4*x*x)\n")
c = int (input("Номер функции:"))

if c == 1:
	a = float (input ("a:"))
	x = float (input ("x:"))
    if 24*a*a-49*a*x+15*x*x == 0:
		print ("Функция не может быть вычислена так как знаменатель не может быть равен 0\n")
		exit(0)
	G = 5*(10*a*a-11*a*x+x*x)/24*a*a-49*a*x+15*x*x
	print ("G=""%2f" %G)

elif c == 2:
	a = float (input ("a:"))
	x = float (input ("x:"))	
	F = sinh(3*a*a+7*a*x+4*x*x)
	print ("F=""%2f" %F)

elif c == 3:
	a = float (input ("a:"))
	if -0.1>a or a>0.1:
		print ("Число не пренадлжеит области определения функции \n")
		exit(0)	
	x = float (input ("x:"))
	if -0.25>x or x>0.25:
		print ("Число не пренадлжеит области определения функции \n")
		exit(0)	
	Y = -atanh(30*a*a+37*a*x-4*x*x)
	print ("Y=""%2f" %Y)
	
else:
	print('Такой функции нету\n')
	