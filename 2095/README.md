# ⚔️ Guerra — Solução (Beecrowd 2095)

Este repositório contém soluções para o problema [Beecrowd 2095 - Guerra](https://www.beecrowd.com.br/judge/pt/problems/view/2095), proposto no **Torneo Argentino de Programación — ACM–ICPC 2013**.

---

## 📜 Enunciado resumido

Dois impérios, **Nogloniano** e **Quadradônia**, têm cada um um exército com `S` soldados.
Cada soldado tem uma **habilidade de combate** e cada batalha é travada entre **um soldado de cada lado**.

Regras:

* O soldado com maior habilidade vence a batalha.
* Se as habilidades forem iguais, há empate (ninguém vence).
* Cada soldado luta **exatamente uma vez**.
* O objetivo é organizar os soldados de Noglônia para **maximizar o número de vitórias**.

---

## 🧠 Lógica da Solução

### ✅ Objetivo:

Maximizar as vitórias de Noglônia escolhendo a ordem correta de envio dos soldados.

### 💡 Estratégia gulosa:

1. Ordenar as habilidades dos soldados de ambos os exércitos em **ordem crescente**.
2. Usar **dois ponteiros** (`i` para Quadradônia, `j` para Noglônia):

   * Se o soldado `N[j]` (Nogloniano) for **mais forte** que `Q[i]` (Quadradônia), ele luta contra esse inimigo e vence → incrementa `w` e `i`.
   * Caso contrário, `N[j]` é fraco demais e deve ser "descartado" contra um inimigo que ele não consegue vencer.
3. Avançar sempre `j` (próximo soldado de Noglônia), mas só avançar `i` (Quadradônia) em caso de vitória.

Esse método garante que cada vitória de Noglônia seja contra o soldado **mais fraco possível** que ele possa vencer, preservando os mais fortes para batalhas mais difíceis.

---

## 🎯 Explicação Visual da Estratégia

Exemplo:

```
S = 4
Quadradônia: 6 3 1 4
Noglônia:    2 7 4 3
```

### Passo 1 — Ordenar:

```
Q: 1 3 4 6
N: 2 3 4 7
```

### Passo 2 — Comparações:

| Q\[i] | N\[j] | N\[j] > Q\[i]? | Vitória? | i (Q) avança? | j (N) avança? | w |
| ----- | ----- | -------------- | -------- | ------------- | ------------- | - |
| 1     | 2     | ✅              | Sim      | i=1           | j=1           | 1 |
| 3     | 3     | ❌              | Não      | i=1           | j=2           | 1 |
| 3     | 4     | ✅              | Sim      | i=2           | j=3           | 2 |
| 4     | 7     | ✅              | Sim      | i=3           | j=4           | 3 |

**Resultado final:** `w = 3` vitórias.

---

## ▶️ Como Executar

### 🐍 Python

```bash
python3 guerra.py
```

### 📘 C99

```bash
gcc -std=c99 -o guerra guerra.c
./guerra
```

---

## 💡 Exemplos de Entrada e Saída

| Entrada                            | Saída |
| ---------------------------------- | ----- |
| `3`<br>`2 1 1000000000`<br>`1 1 2` | `1`   |
| `4`<br>`6 3 1 4`<br>`2 7 4 3`      | `3`   |