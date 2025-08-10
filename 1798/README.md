# ✂️ Cortando Canos — Solução (Beecrowd 1798)

Este repositório contém soluções para o problema [Beecrowd 1798 - Cortando Canos](https://www.beecrowd.com.br/judge/pt/problems/view/1798), proposto no Contest Oficial de Aquecimento da OBI 2015.

---

## 📜 Enunciado resumido

A **OBI (Organização Brasileira de Instalações)** fabrica canos longos, que precisam ser cortados para atender pedidos de clientes.
Cada cliente solicita um comprimento específico de cano e paga um valor determinado por ele.

Dado:

* O **comprimento inicial** de um cano.
* Uma lista com **tamanhos** e **valores** de canos desejados.

O objetivo é determinar o **maior valor total** que pode ser obtido cortando o cano original, podendo repetir comprimentos e deixando sobras.

---

## 🧠 Lógica da Solução

### ✅ Objetivo:

Encontrar o valor máximo que pode ser obtido cortando o cano de tamanho `T` em pedaços com tamanhos e valores pré-definidos.

### 🔍 Etapas:

1. Ler `N` (número de tipos de cortes) e `T` (comprimento do cano inicial).
2. Ler `N` pares `(Ci, Vi)` representando comprimento e valor de cada tipo de cano.
3. Utilizar **Programação Dinâmica** para resolver o problema:

   * `dp[j]` = valor máximo para um cano de comprimento `j`.
   * Para cada comprimento `j` de `1` até `T`:

     * Testar todos os cortes disponíveis.
     * Atualizar `dp[j]` com o melhor valor encontrado.
4. Imprimir `dp[T]`.

**Tipo do problema:** *Unbounded Knapsack* (Mochila Ilimitada), pois podemos usar cada corte quantas vezes quisermos.

---

## ▶️ Como Executar

### 🐍 Python

```bash
python3 cortando_canos.py
```

### 📘 C99

```bash
gcc -std=c99 -o cortando_canos cortando_canos.c
./cortando_canos
```

---

## 💡 Exemplos de Entrada e Saída

| Entrada                           | Saída |
| --------------------------------- | ----- |
| `3 10`<br>`6 3`<br>`2 1`<br>`5 2` | `5`   |
