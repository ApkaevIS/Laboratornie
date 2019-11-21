import argparse
parser = argparse.ArgumentParser()
parser.add_argument('--poly', type=str)
args = parser.parse_args()

print(args.poly)
numbers = list(map(int, args.poly))
porog = len(numbers)
print(porog)
i = 0
x = 0
while(i-1 != porog):
	x = x + (numbers[i]/1*3)
	i = i + 1
print(x)
