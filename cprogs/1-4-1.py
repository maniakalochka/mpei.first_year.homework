import math
i = 0
a = list(map(int, input('Введите массив A через пробел: ').split()))
print('Массив а: ', a)
b = list(map(int, input('Введите массив B через пробел: ').split()))
print('Массив b: ', b)
c = list(map(int, input('Введите массив C через пробел: ').split()))
print('Массив c: ', c)
n = len(a)
per = 0
t = 1
area = 0
for i in range(n):
    if ((len(a) > 3) or (len(b) > 3) or (len(c) > 3)):
        print('Один или несколько массивов не удовлетворяют условию!')
        break
    else:
        per = a[i] + b[i] + c[i]
        t = per * (2 ** 0.5)
        area = (t * (t - a[i]) * (t - b[i]) * (t - c[i])) ** 0.5
        print('Периметр = ', per)
        print('Площадь = ', area)
