# TASK 1

a = [i for i in range(1, 100)]

print("---------------TASK 1.1-----------------")
print("Срез второй половины", a[50:])
print("Вывод с шагом 2", a[::2])
print("Вывод каждого третьего числа до 50-ого", a[2:50:3])
print("Вывод в обратном порядке", a[::-1])

print("\n---------------TASK 1.2-----------------")
for i in a:
    print(i, end="; ")

print("\n---------------TASK 1.3-----------------")

a, b, c = [1, 2, 3], [4, 5, 6], [7, 8, 9]

for i in zip(a, b, c):
    print(i, end=' ')

print("\n---------------TASK 1.4-----------------")
#simple list gen
a = [i for i in range(10)]
print(a)
#list gen with an expression
a = [i ** 2 for i in range(10)]
print(a)
#list gen with i statement
a = [i for i in range(10) if i % 2 == 0]
print(a)

