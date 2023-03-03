from itertools import combinations

def comb(n, m):
    if n > m:
        a = [i for i in range(n)]
        for combination in combinations(a, m):
            print(combination, end=' ')
    else:
        print("Число элементов меньше числа элементов в сочетнии - ОШИБКА")