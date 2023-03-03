with open('test.txt', 'r') as f:
    str = f.read().split()
    str_set = set(str)
    for i in str_set:
        print(i, ': ', str.count(i), sep='')
