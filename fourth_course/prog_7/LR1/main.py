def length(n):
    i = 0
    while n > 0:
        n = n // 10
        i += 1
    return i

max = int(input('Введите максимальное число в последовательности: '))
b = []
i = 1
while i ** 2 <= max:
    ch = i ** 2
    k = length(ch)
    j = 0
    for j in range(k):
        if ch > 9:
            k -= 1
            b.append(ch // (10 ** k))
            ch = ch % (10 ** k)
        else:
            b.append(ch % 10)
    i += 1
n = int(input("Введите n-ю цифру последовательности: ")) - 1
print(b[n])

