# 💞 Números Apaixonados — Solução (Beecrowd 2290)

Este repositório contém soluções para o problema [Beecrowd 2290 - Números Apaixonados](https://www.beecrowd.com.br/judge/pt/problems/view/2290), proposto na **Universidade do Estado do Amazonas (UEA)**.

---

## 📜 Enunciado resumido

Você recebe um vetor com `N` números, onde **todos aparecem em pares**, exceto **dois números** que não têm par — esses são chamados de **números apaixonados**.
A tarefa é identificar esses dois números e imprimir em ordem crescente.

**Regras:**

* `1 ≤ N ≤ 10^5`
* `-10^12 < A < 10^12`
* Sempre existirão exatamente dois números sem par.
* A entrada termina quando `N = 0`.

---

## 🧠 Lógica da Solução

### ✅ Objetivo:

Encontrar os dois números que aparecem um número ímpar de vezes (na prática, **apenas uma vez** cada).

---

### 🔍 Lógica 1 — Usando **contagem de frequências** (Python)

1. Ler `N` e os `N` números.
2. Contar quantas vezes cada número aparece (com `collections.Counter`).
3. Selecionar os que têm **quantidade ímpar** de ocorrências.
4. Ordenar os dois valores e imprimir.

**Complexidade:**

* Tempo: `O(N)`
* Espaço: `O(N)` (para armazenar o dicionário de frequências).

---

### 🔍 Lógica 2 — Usando **XOR** (C)

1. Fazer o XOR de todos os elementos — o resultado será `xor_sum = num1 ^ num2`.
2. Encontrar um **bit diferente** entre `num1` e `num2` usando `mask = xor_sum & (-xor_sum)`.
3. Separar os números em dois grupos:

   * Grupo 1: bit correspondente na máscara **ligado**.
   * Grupo 2: bit correspondente na máscara **desligado**.
4. Fazer XOR separadamente em cada grupo para encontrar `num1` e `num2`.
5. Imprimir em ordem crescente.

**Complexidade:**

* Tempo: `O(N)`
* Espaço: `O(1)` (constante, sem armazenar frequências).

💡 **Vantagem:** o método do XOR é mais eficiente em memória, ideal para grandes `N`.

---

## ▶️ Como Executar

### 🐍 Python

```bash
python3 apaixonados.py
```

### 📘 C99

```bash
gcc -std=c99 -o apaixonados apaixonados.c
./apaixonados
```

---

## 💡 Exemplos de Entrada e Saída

| Entrada                  | Saída   |
| ------------------------ | ------- |
| `6`<br>`1 3 4 7 3 1`     | `4 7`   |
| `4`<br>`1 1 5 1`         | `1 5`   |
| `8`<br>`1 1 3 3 5 5 5 7` | `5 7`   |
| `0`                      | *(fim)* |