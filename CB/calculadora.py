def calculadora():

	num1 = float((input("digite o primeiro número: ")))
	num2 = float((input("digite o segundo número: "))) 
	op = input("digite a operação: ")

	if op == '+':
		resultado = num1+num2
		print("%.2f + %.2f = %.2f" % (num1, num2, resultado))

	elif op == '-':
		resultado = num1-num2
		print("%.2f - %.2f = %.2f" % (num1, num2, resultado))

	elif op == '/':
		resultado = num1/num2
		print("%.2f / %.2f = %.2f" % (num1, num2, resultado))

	elif op == '*':
		resultado = num1*num2
		print("%.2f * %.2f = %.2f" % (num1, num2, resultado))

calculadora()

