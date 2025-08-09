N = float(input())
valor = int(round(N * 100))

notas = [10000, 5000, 2000, 1000, 500, 200]
moedas = [100, 50, 25, 10, 5, 1]

print('NOTAS:')
for nota in notas:
    qtd = valor // nota
    print(f'{qtd} nota(s) de R$ {nota/100:.2f}')
    valor %= nota

print('MOEDAS:')
for moeda in moedas:
    qtd = valor // moeda
    print(f'{qtd} moeda(s) de R$ {moeda/100:.2f}')
    valor %= moeda
