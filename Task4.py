import combinations_module as cm

print('Введите n и m (общее число элементов и число элементов в сочетании соотв.): ', end='')
n, m = map(int, input().split())
cm.comb(n, m)
