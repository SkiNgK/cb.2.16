# encoding: utf -8


matriz = [['-','-','-'],
	  ['-','-','-'],
	  ['-','-','-']] 


    print'\n'
print'\t  0   1   2'
print'\t0 %s | %s | %s ' % (matriz[0][0], matriz[0][1], matriz[0][2])
print'\t  ---------- '
print'\t1 %s | %s | %s ' % (matriz[1][0], matriz[1][1], matriz[1][2])
print'\t  ----------'
print'\t2 %s | %s | %s ' % (matriz[2][0], matriz[2][1], matriz[2][2])
print'\n'

print 'Jogador 1 = X e Jogador 2 = O'
vez=2
op = 'S'
velha=0

while op=='S':
	for i in range(100):
		if vez%2==0:
	
			print 'Jogador 1, digite as coordenadas da sua jogada'
			linha = input ('Linha: ')
			coluna = input ('Coluna: ')
			if matriz[linha][coluna]=='-':
				matriz[linha][coluna]='X'
			else:
				print 'Jogada inválida, digite novamente'
				linha = input ('Linha: ')
				coluna = input ('Coluna: ')
				matriz[linha][coluna]='X'
			
			print '\n' * 100
			print'\n'
			print'\t  0   1   2'
			print'\t0 %s | %s | %s ' % (matriz[0][0], matriz[0][1], matriz[0][2])
			print'\t  ---------- '
			print'\t1 %s | %s | %s ' % (matriz[1][0], matriz[1][1], matriz[1][2])
			print'\t  ----------'
			print'\t2 %s | %s | %s ' % (matriz[2][0], matriz[2][1], matriz[2][2])
			print'\n'

		else:
			print 'Jogador 2, digite as coordenadas da sua jogada'
			linha = input ('Linha: ')
			coluna = input ('Coluna: ')
			if matriz[linha][coluna]=='-':
				matriz[linha][coluna]='O'
			else:
				print 'Jogada inválida, digite novamente'
				linha = input ('Linha: ')
				coluna = input ('Coluna: ')
				matriz[linha][coluna]='O'
			
			print '\n' * 100 
			print'\n'
			print'\t  0   1   2'
			print'\t0 %s | %s | %s ' % (matriz[0][0], matriz[0][1], matriz[0][2])
			print'\t  ---------- '
			print'\t1 %s | %s | %s ' % (matriz[1][0], matriz[1][1], matriz[1][2])
			print'\t  ----------'
			print'\t2 %s | %s | %s ' % (matriz[2][0], matriz[2][1], matriz[2][2])
			print'\n'
		vez+=1
		
		#verificando as linhas
		if(matriz[0][0]=='X' and matriz[0][1]=='X' and matriz[0][2]=='X'):
        		print "\nJogador 1, Venceu !!"
        		break
    		else:
        		velha+=1

    		if(matriz[1][0]=='X' and matriz[1][1]=='X' and matriz[1][2]=='X'):
			print "\nJogador 1, Venceu !!"
		        break
		else:
        		velha+=1

    		if(matriz[2][0]=='X' and matriz[2][1]=='X' and matriz[2][2]=='X'):
        		print "\nJogador 1, Venceu !!"
        		break
    		else:
        		velha+=1

    		if(matriz[0][0]=='O' and matriz[0][1]=='O' and matriz[0][2]=='O'):
    
    	    		print "\nJogador 2, Venceu !!"
        		break
    		else:
        		velha+=1

    		if(matriz[1][0]=='O' and matriz[1][1]=='O' and matriz[1][2]=='O'):
        		print "\nJogador 2, Venceu !!"
        		break
    		else:
        		velha+=1

    		if(matriz[2][0]=='O' and matriz[2][1]=='O' and matriz[2][2]=='O'):
		        print "\nJogador 2, Venceu !!"
		        break
    		else:
        		velha+=1

    		#verificando as colunas
    		if(matriz[0][0]=='X' and matriz[1][0]=='X' and matriz[2][0]=='X'):
        		print "\nJogador 1, Venceu !!"
        		break
    		else:
        		velha+=1

    		if(matriz[0][1]=='X' and matriz[1][1]=='X' and matriz[2][1]=='X'):
        		print "\nJogador 1, Venceu !!"
        		break
    		else:
      			velha+=1

    		if(matriz[0][2]=='X' and matriz[1][2]=='X' and matriz[2][2]=='X'):
		        print "\nJogador 1, Venceu !!"
        		break
    		else:
        		velha+=1

     		if(matriz[0][0]=='O' and matriz[1][0]=='O' and matriz[2][0]=='O'):
			print "\nJogador 2, Venceu !!"
			break
    		else:
        		velha+=1

    		if(matriz[0][1]=='O' and matriz[1][1]=='O' and matriz[2][1]=='O'):
        		print "\nJogador 2, Venceu !!"
        		break
    		else:
        		velha+=1

	    	if(matriz[0][2]=='O' and matriz[1][2]=='O' and matriz[2][2]=='O'):
        		print "\nJogador 2, Venceu !!"
        		break
    		else:
        		velha+=1

     		#verificando as diagonais
    		if(matriz[0][0]=='X' and matriz[1][1]=='X' and matriz[2][2]=='X'):
        		print "\nJogador 1, Venceu !!"
        		break
    		else:
        		velha+=1

    		if(matriz[0][2]=='X' and matriz[1][1]=='X' and matriz[2][0]=='X'):
        		print "\nJogador 1, Venceu !!"
        		break
    		else:
        		velha+=1

    		if(matriz[0][0]=='O' and matriz[1][1]=='O' and matriz[2][2]=='O'):
        		print "\nJogador 2, Venceu !!"
        		break
    		else:
        		velha+=1

    		if(matriz[0][2]=='O' and matriz[1][1]=='O' and matriz[2][0]=='O'):
        		print "\nJogador 2, Venceu !!"
        		break
    		else:
        		velha+=1

    		if(velha==144):
			print "\nDeu Velha !!  "
        		break	

	op = raw_input ('Deseja jogar novamente ? "S"-sim ou "N"-não : ')
	if op == 'S':
		matriz = [['-','-','-'],
			  ['-','-','-'],
			  ['-','-','-']]
		print'\n'
		print'\t  0   1   2'
		print'\t0 %s | %s | %s ' % (matriz[0][0], matriz[0][1], matriz[0][2])
		print'\t  ---------- '
		print'\t1 %s | %s | %s ' % (matriz[1][0], matriz[1][1], matriz[1][2])
		print'\t  ----------'
		print'\t2 %s | %s | %s ' % (matriz[2][0], matriz[2][1], matriz[2][2])
		print'\n'	

