'''
Код Райса для числа n состоит из двух частей. Первая часть - унарный код числа q = n/m, вторая часть - двоичная запись остатка от деления n на m длиной c. 
Код Райса это код Голомбо, при m = степени 2
'''
import math


def to_rice(n,m):
    c = math.log(m,2) # логарифм
    r = n % m #остаток от деления числа на m
    q = int(math.floor(n / m)) # частное, округленное вниз, от числа на м
    first = ""
    for i in range(q):
      first += "1" #унарная запись
    zeros = ""
    if int(math.log2(m)) > len(str(r)):
      i = 0
      while i < int(math.log2(m)) - len(str(bin(r)[2:])):
        zeros += "0"
        i+=1
    bi = zeros + str(bin(r)[2:])
    final = first + "0" + str(bi)
    return final


m = 2
n = 5
rice = to_rice (n,m)
print ("Код Райса для",n,"с параметром m",m,"=",rice)


'''
def kolvo_ed(x):
  a = 0
  for i in x:
    i = int(i)
    a += i
  return a


def from_rice(z,m):
  k = int(math.log2(m))
  x = list(z)
  f = x[:-k]
  l = x[-k:]
  final = kolvo_ed(f) * 2 * k + kolvo_ed(l)
  return final

print(from_rice("0000100", 64))
'''
