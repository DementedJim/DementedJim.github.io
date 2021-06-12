import math


def unarn(x):
    result = ""
    for i in range(x):
      result += "1"
    return result + "0"
  

def bin_bites(x, y):
    if x == 0: return ""
    i = 0
    zeros = ""
    while i < (x - len(y)):
      zeros += "0"
      i += 1
    result = zeros + str(y)
    return result


def to_golombo(n,m):
    result = ""
    if math.log2(m) % 1 == 0 and m != 1:
      result = to_rice(n,m)
    else:
      q = math.floor(n / m)
      first = unarn(q)
      r = n % m
      b = math.ceil(math.log2(m))
      if r < (2 ** b) - m:
        bi = bin_bites(b-1, bin(r)[2:])
        result = first + str(bi)
      else:
        bi = bin_bites(b, bin(r + 2 ** b - m)[2:])
        result = first + str(bi)
    return result    

  
def to_rice(n,m):
    bi = ""
    c = math.log(m,2) # логарифм
    r = n % m #остаток от деления числа на m
    q = int(math.floor(n / m)) # частное, округленное вниз, от числа на м
    first = unarn(q)
    bi = bin_bites(math.log2(m), bin(r)[2:])
    final = first + str(bi)
    return final

'''
a = 0
b = 1
while a < 18:
  for b in range(1, 9):
    if b == 7:
      b+=1
    else: 
      print ("Код Голомбо для",a,"с параметром m",b,"=",to_golombo(a, b))
      b+=1
  print("=============================================================")
  a+=1
'''

print(to_golombo(19,3))