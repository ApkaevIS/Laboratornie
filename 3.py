from math import sinh
from math import atanh

exit1 = 2
while exit1 == 2:

	print ("Выберите функцию\n 1- G = 5*(10*a*a-11*a*x+x*x)/24*a*a-49*a*x+15*x*x \n 2- F = sinh(3*a*a+7*a*x+4*x*x\n 3- Y = -atanh(30*a*a+37*a*x-4*x*x)\n")
	c = int (input("Номер функции:"))
	a = float (input ("a:"))
	x = float (input ("x:"))
	x2 = float (input("x2:"))
	shag = float (input("Шаг вычисления:"))
	if shag > x2:
		print ("Шаг вычисления функции больше чем сама область вычисления функции\n")
		continue

	if c == 1:
		while x <= x2:
			if 24*a*a-49*a*x+15*x*x == 0:
				print ("Функция не может быть вычислена так как знаменатель не может быть равен 0\n")
				continue
			G = 5*(10*a*a-11*a*x+x*x)/24*a*a-49*a*x+15*x*x
			print ('{:2f}\t {:2f}'.format(G,x))
			x = x + shag

	elif c == 2:
		while x <= x2:	
			F = sinh(3*a*a+7*a*x+4*x*x)
			print ('{:2f}\t {:2f}'.format(F,x))
			x = x + shag
			
	elif c == 3:
		if -0.1>a or a>0.1:
			print ("Число не пренадлжеит области определения функции \n")
			continue	
		if -0.25>x or x>0.25:
			print ("Число не пренадлжеит области определения функции \n")
			continue	
		while x <= x2:
			if -0.25>x or x>0.25:
				print ("Число не пренадлжеит области определения функции \n")
				continue
			Y = -atanh(30*a*a+37*a*x-4*x*x)
			print ('{:2f}\t {:2f}'.format(Y,x))
			x = x + shag
			
	else:
		print('Такой функции нету\n')

	print ("Хотите выйти из программы 1 - да 2 - нет")
	exit1 = int(input())		
	