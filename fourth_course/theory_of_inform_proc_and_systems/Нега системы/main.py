def EncodeNegBase(n, b): #В нега
	if n == 0:
		return "0"
	out = []
	while n != 0:
		n, rem = divmod(n, b)
		if rem < 0:
			n += 1
			rem -= b
		out.append(rem)
	return "".join(map(str, out[::-1]))
 
def DecodeNegBase(nstr, b): #Из нега
	if nstr == "0":
		return 0
 
	total = 0
	for i, ch in enumerate(nstr[::-1]):
		total += int(ch) * b**i
	return total

 
if __name__=="__main__":
 
	print ("Результат перевода 12 в нега-двоичную (ожидаем: 11100)")
	result = EncodeNegBase(12, -2)
	print (result)
	if DecodeNegBase(result, -2) == 12: print ("Успешно прошло проверку на обратный перевод")
	else: print ("Во время перевода в десятичную что-то пошло не так")

	print ("Результат перевода 28 в нега-троичную (ожидаем: 12001)")
	result = EncodeNegBase(146, -3)
	print (result)
	if DecodeNegBase(result, -3) == 28: print ("Успешно прошло проверку на обратный перевод")
	else: print ("Во время перевода в десятичную что-то пошло не так")
 
	print ("Результат перевода 15 в нега-десятичную (ожидаем: 195)")
	result = EncodeNegBase(15, -10)
	print (result)
	if DecodeNegBase(result, -10) == 15: print ("Успешно прошло проверку на обратный перевод")
	else: print ("Во время перевода в десятичную что-то пошло не так")
