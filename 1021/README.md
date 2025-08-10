# 💵 Notas e Moedas — Solução (Beecrowd 1021)

Este repositório contém soluções para o problema [Beecrowd 1021 - Notas e Moedas](https://www.beecrowd.com.br/judge/pt/problems/view/1021), proposto por Neilor Tonin.

---

## 📜 Enunciado resumido

Dado um valor monetário com duas casas decimais, é necessário calcular a **menor quantidade possível de notas e moedas** para representar esse valor.
As notas disponíveis são: **100, 50, 20, 10, 5, 2**.
As moedas disponíveis são: **1, 0.50, 0.25, 0.10, 0.05 e 0.01**.

---

## 🧠 Lógica da Solução

### ✅ Objetivo:

Decompor o valor informado em **centavos** e calcular, em ordem decrescente, quantas notas e moedas de cada tipo são necessárias.

### 🔍 Etapas:

1. Ler o valor `N` (float).
2. Converter para **centavos** para evitar problemas com ponto flutuante:

   ```python
   valor = int(round(N * 100))
   ```
3. Criar uma lista com os valores das notas em centavos.
4. Calcular a quantidade de cada nota e atualizar o valor restante.
5. Criar uma lista com os valores das moedas em centavos.
6. Calcular a quantidade de cada moeda e atualizar o valor restante.
7. Exibir no formato especificado.

---

## ▶️ Como Executar

### 🐍 Python

```bash
python3 notas_moedas.py
```

### 📘 C99

```bash
gcc -std=c99 -o notas_moedas notas_moedas.c -lm
./notas_moedas
```

---

## 💡 Exemplos de Entrada e Saída

| Entrada  | Saída                                                                                                                                                                                                                                                                                                                                    |
| -------- | ---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- |
| `576.73` | NOTAS:<br>5 nota(s) de R\$ 100.00<br>1 nota(s) de R\$ 50.00<br>1 nota(s) de R\$ 20.00<br>0 nota(s) de R\$ 10.00<br>1 nota(s) de R\$ 5.00<br>0 nota(s) de R\$ 2.00<br>MOEDAS:<br>1 moeda(s) de R\$ 1.00<br>1 moeda(s) de R\$ 0.50<br>0 moeda(s) de R\$ 0.25<br>2 moeda(s) de R\$ 0.10<br>0 moeda(s) de R\$ 0.05<br>3 moeda(s) de R\$ 0.01 |
| `4.00`   | NOTAS:<br>0 nota(s) de R\$ 100.00<br>0 nota(s) de R\$ 50.00<br>0 nota(s) de R\$ 20.00<br>0 nota(s) de R\$ 10.00<br>0 nota(s) de R\$ 5.00<br>2 nota(s) de R\$ 2.00<br>MOEDAS:<br>0 moeda(s) de R\$ 1.00<br>0 moeda(s) de R\$ 0.50<br>0 moeda(s) de R\$ 0.25<br>0 moeda(s) de R\$ 0.10<br>0 moeda(s) de R\$ 0.05<br>0 moeda(s) de R\$ 0.01 |
| `91.01`  | NOTAS:<br>0 nota(s) de R\$ 100.00<br>1 nota(s) de R\$ 50.00<br>2 nota(s) de R\$ 20.00<br>0 nota(s) de R\$ 10.00<br>0 nota(s) de R\$ 5.00<br>0 nota(s) de R\$ 2.00<br>MOEDAS:<br>1 moeda(s) de R\$ 1.00<br>0 moeda(s) de R\$ 0.50<br>0 moeda(s) de R\$ 0.25<br>0 moeda(s) de R\$ 0.10<br>0 moeda(s) de R\$ 0.05<br>1 moeda(s) de R\$ 0.01 |
