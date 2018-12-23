import math
import random

T = 1000

def getRandomNumber():
	return random.uniform(-10, 10)
def isValid	(x, y, Centerpoint, r):
	if(math.sqrt(((x - Centerpoint[1])*(x - Centerpoint[1]))+((y - Centerpoint[2])*(y - Centerpoint[2]))) <= r):
		return 1
	return 0
def SearchArea():
	Centerpoint = dict.fromkeys([1, 2])			
	Centerpoint[1] = getRandomNumber()
	Centerpoint[2] = getRandomNumber()
	return Centerpoint


pointx = []
pointy = []
tochka = dict.fromkeys([1, 2])

r = 1.0
Centerpoint = SearchArea()
i = 0
while i <= T:
	tochka[1] = getRandomNumber()
	tochka[2] = getRandomNumber()
	pointx.append(tochka[1])
	pointy.append(tochka[2])
	i = i+1
i = 0
N = 0
while i <= T: 	
	x = pointx[i]
	y = pointy[i]
	true = isValid(x, y, Centerpoint, r)
	if (true == 1):
		N = N+1
	i = i+1	

print('Колличество точек в области ')
print(N)
