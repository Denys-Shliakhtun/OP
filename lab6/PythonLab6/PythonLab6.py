def input_num(l): #введення числа
    a = int(input("Введіть "+l+": "))
    return a

def gcd(a, b): #знаходження НСД двох чисел
    if b == 0:
        return a
    else:
        return gcd(b, a % b)

n = input_num('n')      #введення першого числа
i = input_num('i')      #введення другого числа
m = input_num('m')      #введення третього числа
d = int(gcd(gcd(n, i), m))  #знаходження НСД трьох чисел
print("Найбільший спільний дільник: " +str(d))