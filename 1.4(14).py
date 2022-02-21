def fun(a_list, x):
    sum = 0
    a = len(a_list)
    for i in a_list:
        sum += i * (x ** (a-1))
        a = a - 1
    return sum
print (fun([1,6,9], 3))   