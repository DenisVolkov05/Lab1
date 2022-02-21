import math
m = float(input("Введите массу тела "))
a = float(input("Введите угол наклона "))
u = float(input("Введите коэффициент трения "))
F_0 = float(input("Введите приложенную силу "))
g = 10
F = F_0 * math.cos(a*3.14 / 180) - u*m*g*math.sin(a*3.14 / 180)
a = F/m if (abs(F_0*math.cos(a)) > abs(u*m*g*math.sin(a))) else 0
print ("Ускорение равно " + str(a))