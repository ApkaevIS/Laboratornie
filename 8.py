import math
import random

randpoint = dict.fromkeys([1, 2])
randpoint['x'] = random.uniform(0, 100)
randpoint['y'] = random.uniform(0, 100)

pointx = []
pointy = []
tochka = dict.fromkeys([1, 2])

r = 10

T = int(input("Введите колличество точек\n: "))
F = T
J = 0
while J <= T:
	tochka[1] = random.uniform(0, 100)
	tochka[2] = random.uniform(0, 100)
	pointx.append(tochka[1])
	pointy.append(tochka[2])
	J = J+1
J = 0
T = 0	
while J <= F: 	
	if(math.sqrt(((pointx[T].tochka[1] - randpoint[1])*(pointx[T].tochka[1] - randpoint[1]))+((pointy[T].tochka[2] - randpoint[2])*(pointy[T].tochka[2] - randpoint[2]))) <= r):	
		T = T+1
		J = J+1
		N = N+1
print('Колличество точек в области ' '%d' &N)
