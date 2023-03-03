# data types

# numbers - integer and rational - are immutable
# immutable objects' data cannot be changed
a = 3
b = 10

# all basic arithmetic operations are available
# Division is presented by 3 functions
c = b / a # == 3.3333...
c = b % a # == 1
c = b // a # == 3

# list - mutable type

l = [-1, -2, -3, 1, 2, 3]
print(id(l))
l.append(-123)
# ids will be equal
print(id(l))
l.pop(0)
# lists can be sorted
l.sort()
print(l)

# tuples are like lists. but immutable and work a bit faster
l = (1, 2, 3)


class Vector:
    def __init__(self, x, y):
        self.x = x
        self.y = y

    def __add__(self, other):
        return Vector(self.x + other.x, self.y + other.y)

    def __sub__(self, other):
        return Vector(self.x - other.x, self.y - other.y)

    def __mul__(self, other):
        return self.x * other.x + self.y * other.y

    def __str__(self):
        return '(' + str(self.x) + ", " + str(self.y) + ')'

vec1 = Vector(1, 2)
vec2 = Vector(3, 4)
vec3 = vec1 + vec2
print("Сумма векторов:", vec3)
vec3 = vec1 - vec2
print("Разность векторов:", vec3)

# generates Fibonacci numbers from 2nd to n-th
def fib(n):
    a1 = 0
    a2 = 1
    for i in range(n - 1):
        res = a1 + a2
        yield res
        a1 = a2
        a2 = res


for i in fib(5):
    print(i)



