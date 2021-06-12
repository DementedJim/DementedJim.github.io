from math import sin


def integrate(f, a, b, n_iter=1000):
    h = (b - a) / float(n_iter)
    total = sum([f((a + (k * h))) for k in range(0, n_iter)])
    result = h * total
    return result


def f(x):
    return sin(x)


t = pow(10, -8)  # float  с точностью 10^-8
n_iter = 2
Sa = integrate(f, 1, 2, n_iter)
n_iter *= 2
Sb = integrate(f, 1, 2, n_iter)

while abs(Sa - Sb) > t:
    n_iter *= 2
    Sa = integrate(f, 1, 2, n_iter)
    n_iter *= 2
    Sb = integrate(f, 1, 2, n_iter)

print("Площадь под кривой:", Sb)

if __name__ == '__main__':
    pass
