import math
n = int(input('Введите кол-во вычислений: '))
n_count = 1
if (n < 0):
    print('Некорректные данные')
else:
    a = float(input('Введите значение А: '))
    x_1 = float(input('Введите значение x1: '))
    dx = a/4
    for i in range(n):
        if (x_1 < a):
            y = -((((a ** 2/3) - (x ** 2/3)) ** 1/3) ** 0.5)
        else:
            y = math.log(x_1)
            print('n = ', n_count)
            print('x1 = ', x_1)
            print('y = ', y)
            print('_________')
            x_1 += dx
            n_count += 1
