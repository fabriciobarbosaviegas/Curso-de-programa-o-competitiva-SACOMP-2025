# 🌭 Cachorros-Quentes — Solução (Beecrowd 2234)

Este repositório contém soluções para o problema [Beecrowd 2234 - Cachorros-Quentes](https://www.beecrowd.com.br/judge/pt/problems/view/2234), proposto na **Maratona de Programação SBC 2016**.

---

## 📜 Enunciado resumido

Dada a quantidade total de cachorros-quentes consumidos (**H**) e o número total de participantes (**P**) de uma competição, calcule o **número médio** de cachorros-quentes consumidos por participante, **com exatamente duas casas decimais**.

---

## 🧠 Lógica da Solução

1. Ler os dois inteiros `H` (hot dogs) e `P` (participantes).
2. Calcular a média:

   $$
   \text{média} = \frac{H}{P}
   $$
3. Imprimir o valor com **duas casas decimais**, mesmo que a segunda casa seja zero.

   * Exemplo: `0.10` deve aparecer como `0.10`, e não `0.1`.

---

## 🎯 Detalhes importantes

* Em **C**, usamos `printf("%.2f\n", r)` para garantir 2 casas decimais.
* Em **Python**, podemos usar `f"{valor:.2f}"` para formatar corretamente, sem precisar de lógica extra para zeros à direita.

---

## ▶️ Como Executar

### 🐍 Python

```bash
python3 cachorros_quentes.py
```

### 📘 C99

```bash
gcc -std=c99 -o cachorros_quentes cachorros_quentes.c
./cachorros_quentes
```

---

## 💡 Exemplos de Entrada e Saída

| Entrada   | Saída   |
| --------- | ------- |
| `10 90`   | `0.11`  |
| `840 11`  | `76.36` |
| `1 50`    | `0.02`  |
| `34 1000` | `0.03`  |
| `35 1000` | `0.04`  |