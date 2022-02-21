import math
def fun(x, y, z, a, b, c):
    cos = (x*a + y*b + z*c) / math.sqrt((x**2 + y**2 + z**2)*(a**2 + b**2 + c**2))
    alp = math.acos(cos)
    return (alp * 180 / 3.14)
print (fun(1, 1, 1, 2, 2, 2))  