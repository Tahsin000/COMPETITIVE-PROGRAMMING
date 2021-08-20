a = float (input())

if a <= 400 :
    result = float(a*0.15)
    print('Novo salario: %.2f'%(result+a))
    print('Reajuste ganho: %.2f'%(result))
    print('Em percentual: 15 %')

elif a<= 800 :
    result = float (a * 0.12)
    print('Novo salario: %.2f'%(result+a))
    print('Reajuste ganho: %.2f'%(result))
    print('Em percentual: 12 %')

elif a <= 1200 :
    result = float (a * 0.10)
    print('Novo salario: %.2f'%(result+a))
    print('Reajuste ganho: %.2f'%(result))
    print('Em percentual: 10 %')

elif a <= 2000 :
    result = float (a * 0.07)
    print('Novo salario: %.2f'%(result+a))
    print('Reajuste ganho: %.2f'%(result))
    print('Em percentual: 7 %')

elif a >= 2000 :
    result = float (a * 0.04)
    print('Novo salario: %.2f'%(result+a))
    print('Reajuste ganho: %.2f'%(result))
    print('Em percentual: 4 %')
