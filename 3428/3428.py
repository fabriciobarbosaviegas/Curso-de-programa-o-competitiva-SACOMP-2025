n = int(input())
b = [int(i) for i in input().split()]

flechas = {}
c = 0

for altura in b:
    # Verificar se já existe uma flecha na altura atual
    if flechas.get(altura, 0) > 0:
        flechas[altura] -= 1  # Usa a flecha existente
        flechas[altura - 1] = flechas.get(altura - 1, 0) + 1  # Adiciona flecha para a nova altura
    else:
        c += 1  # Lançar uma nova flecha
        flechas[altura - 1] = flechas.get(altura - 1, 0) + 1  # Adiciona flecha para a nova altura

print(c)
