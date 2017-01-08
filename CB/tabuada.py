def tabuada():
	num=int(input('Digite um numero pra imprimir a tabuada: '))
	i=1

	for i in range(i,11):
		resultado = i*num
		print (num,"x",i,'=',resultado)
	i=i+1

tabuada()