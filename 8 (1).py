import math
import random
import time

T = 2000000


def getRandomNumber():
	return random.uniform(-10, 10)


def isValid	(Point, Centerpoint):
	if(math.sqrt(((Point[1] - Centerpoint[1])*(Point[1] - Centerpoint[1]))+((Point[2] - Centerpoint[2])*(Point[2] - Centerpoint[2]))) <=  Centerpoint[3]):
		return 1
	return 0


def SearchArea(r):
	Centerpoint = dict.fromkeys([1, 2, 3])			
	Centerpoint[1] = getRandomNumber()
	Centerpoint[2] = getRandomNumber()
	Centerpoint[3] = r
	return Centerpoint


r = 5.0
Centerpoint = SearchArea(r)

Point = []
for i in range(T):
    tochka = dict.fromkeys([1, 2])
    tochka[1] = getRandomNumber()
    tochka[2] = getRandomNumber()
    Point.append(tochka)

#print(Point)

#print(Point)
i = 0
N = 0
start_time = time.time()
for i in range(T):	
#	print(Point[i])
	true = isValid(Point[i], Centerpoint)
	if (true == 1):
		N = N+1

print("--- %s seconds ---" % (time.time() - start_time))
print('Колличество точек в области ')
print(N)
f =  open('laba8py.txt','a')
f.write('{:2f}\t {:2f}\n'.format(T,(time.time() - start_time)))
f.close