a = list(map(int, input('Введите массив A через пробел: ').split()))
print('Массив а: ', a)
c = list(map(int, input('Введите массив C через пробел: ').split()))
print('Массив c: ', c)

max = -1000000 # С запасом
min = 100000000
i = 0
aarr_lenght = len(a)
carr_length = len(c)
for i in range(aarr_lenght):
    if a[i] > max:
        max = a[i]
print('Максимальный элемент в массиве A', max)

for i in range(carr_length):
    if c[i] < min:
        min = c[i]
print('Минимальный элемент в массиве C', min)
