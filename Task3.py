from random import randint


def mean(nums):
    res = 0
    if len(nums) != 0:
        for i in nums:
            res += i
        res /= len(nums)

    return res


def sort(nums, cmp):
    for i in range(len(nums)):
        for j in range(len(nums) - 1):
            if cmp(nums[j]) > cmp(nums[j+1]):
                nums[j], nums[j+1] = nums[j+1], nums[j]

print("-------------Функция подсчета среднего числа набора чисел-----------")
numbers = [randint(-50, 50) for i in range(15)]
print(numbers, "\nmean: ", mean(numbers), sep='')

print("\n-----------функция сортировки, принимающая на вход функцию сравнения-----------")
numbers = [(randint(-50, 50), randint(-50, 50)) for i in range(15)]

sort(numbers, lambda x: x[0])
print(numbers)
