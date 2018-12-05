k = input("Введите число\n")
if k.find(".") == 0:
    print("Число не целое!\n0")
j = 0
k = str(k)
for i in range(len(k)):
    if  int(k[i]) % 2 == 0:
        j= j+1
print("Колличество четных чисел ", j)