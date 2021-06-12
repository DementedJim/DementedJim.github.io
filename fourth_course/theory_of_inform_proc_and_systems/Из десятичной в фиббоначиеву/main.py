def tofib(n):
    if n == 0 : return [0]
    fib = [2,1]
    while fib[0] < n: fib[0:0] = [sum(fib[:2])]
    dig = []
    for f in fib:
        if f <= n:
            dig, n = dig + [1], n - f
        else:
            dig += [0]        
    return dig if dig[0] else dig[1:]
    

def todec(y):
  a=b=0
  for x in y:a,b=b+x,a+b+x
  return b


print("Введите число для перевода:")
z = int(input())
print("В фибоначчиевой сс: ", tofib(z))
print("И обратно: ", todec(tofib(z)))
'''
z = [9,8,7]
print(todec(z))

Пошаговая демонстрация

y = tofib(n)
a=b=0
for x in y:
  a,b = b+x, a+b+x
  print(a, b)
print("Результат:", b)
'''





