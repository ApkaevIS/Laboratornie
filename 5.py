from math import sinh
from math import atanh

exit1 = 0
while exit1 == 0:

	mas = []
	stg = []
	stf = []
	sty = []	
	sta = input("a:")
	a = float(sta)
	stx = input("x:")
	x = float(stx)
	stx2 = input("x2:")
	x2 = float(stx2)
	stk = input("Количество шагов вычисления:")
	kolshag = float (stk)
	shag = (x2 - x)/kolshag
	if shag > x2:
		print ("Шаг вычисления функции больше чем сама область вычисления функции\n")
		continue

	i = 0
	while x <= x2:
		if abs(24*a*a-49*a*x+15*x*x) <= 0.00001:
			print ("Функция не может быть вычислена так как знаменатель не может быть равен 0\n")
			continue
		G = 5*(10*a*a-11*a*x+x*x)/24*a*a-49*a*x+15*x*x
		mas.append(G)
		stg = "\t".join([str(i) for i in mas])
		print ('{:2f}\t {:2f}'.format(x,mas[i]))
		i = i + 1
		x = x + shag
	print(stg)
	sh = input("Задайте шаблон для поиска совпадения ")
	sovp = stg.count(sh)
	print('Колличество совпадений ' '%d' %sovp)
	minimum = min(mas)
	maximum = max(mas)
	print ('Минимальный элемент ''%2f' %minimum)
	print ('Максимальный элемент ''%2f' %maximum) 	 	
				
	sta = input("a:")
	a = float(sta)
	stx = input("x:")
	x = float(stx)
	stx2 = input("x2:")
	x2 = float(stx2)
	stk = input("Количество шагов вычисления:")
	kolshag = float (stk)
	shag = (x2 - x)/kolshag
	if shag > x2:
		print ("Шаг вычисления функции больше чем сама область вычисления функции\n")
		continue

	i = 0
	while x <= x2:	
		F = sinh(3*a*a+7*a*x+4*x*x)
		mas.append(F)
		stf = "\t".join([str(i) for i in mas])
		print ('{:2f}\t {:2f}'.format(x,mas[i]))
		i = i + 1
		x = x + shag

	print(stf)
	sh = input("Задайте шаблон для поиска совпадения")
	sovp = stf.count(sh)
	minimum = min(mas)
	maximum = max(mas)
	print ('Минимальный элемент ''%2f' %minimum)
	print ('Максимальный элемент ''%2f' %maximum) 	 	
			
	sta = input("a:")
	a = float(sta)
	stx = input("x:")
	x = float(stx)
	stx2 = input("x2:")
	x2 = float(stx2)
	stk = input("Количество шагов вычисления:")
	kolshag = float (stk)
	shag = (x2 - x)/kolshag
	if shag > x2:
		print ("Шаг вычисления функции больше чем сама область вычисления функции\n")
		continue
	if -0.1 > a or a > 0.1:
		print ("Число не пренадлжеит области определения функции \n")
		continue	
	if -0.25 > x or x > 0.25:
		print ("Число не пренадлжеит области определения функции \n")
		continue	
	while x <= x2:
		if -0.25 > x or x > 0.25:
			print ("Число не пренадлжеит области определения функции \n")
			continue
		Y = -atanh(30*a*a+37*a*x-4*x*x)
		mas.append(Y)
		sty = "\t".join([str(i) for i in mas])
		print ('{:2f}\t {:2f}'.format(x,mas[i]))
		i = i + 1
		x = x + shag

	print(sty)
	sh = input("Задайте шаблон для поиска совпадения")
	sovp = sty.count(sh)
	minimum = min(mas)
	maximum = max(mas)
	print ('Минимальный элемент ''%2f' %minimum)
	print ('Максимальный элемент ''%2f' %maximum)
			


	print ("Хотите выйти из программы 1 - да 0 - нет")
	exit1 = int(input())		
	