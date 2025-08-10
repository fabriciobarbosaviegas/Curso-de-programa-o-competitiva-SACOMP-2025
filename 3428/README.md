# 🎯 Estourando Balões — Solução (Beecrowd 3428)

Problema da [Maratona de Programação SBC 2022](https://www.beecrowd.com.br/judge/pt/problems/view/3428) que envolve simular disparos de flechas para estourar balões no menor número de tiros.

---

## 📜 Enunciado resumido

Temos `N` balões posicionados da esquerda para a direita, cada um com uma **altura** `Hᵢ`.
Carlinhos atira flechas da esquerda para a direita em altura fixa.
Quando a flecha acerta um balão:

* Ela **continua** seu trajeto
* Sua altura **diminui em 1**

Objetivo: **Calcular o menor número de flechas necessárias** para estourar todos os balões.

**Restrições:**

* `1 ≤ N ≤ 5×10⁵`
* `1 ≤ Hᵢ ≤ 10⁶`

---

## 🧠 Lógica da Solução

A chave está em **reaproveitar flechas**:

* Se já houver uma flecha voando na altura de um balão, usamos ela.
* Senão, lançamos uma nova flecha.

### 🔍 Passos

1. Manter um **mapa** (`flechas[altura]`) que indica quantas flechas estão na altura `altura` no momento.
2. Para cada balão (da esquerda para a direita):

   * Se `flechas[altura] > 0`:

     * Usa uma flecha existente (`flechas[altura] -= 1`)
     * Continua a flecha para `altura-1` (`flechas[altura-1] += 1`)
   * Senão:

     * Lança nova flecha (`c++`)
     * Continua para `altura-1`
3. Ao final, `c` é o número mínimo de flechas.

---

## 📊 Explicação visual

### Exemplo

Entrada:

```
5
3 2 1 5 4
```

Simulação:

| Balão | Altura | Flechas ativas antes | Ação        | Flechas ativas depois |
| ----- | ------ | -------------------- | ----------- | --------------------- |
| 1     | 3      | {}                   | Nova flecha | {2: 1}                |
| 2     | 2      | {2: 1}               | Usa flecha  | {1: 1}                |
| 3     | 1      | {1: 1}               | Usa flecha  | {0: 1}                |
| 4     | 5      | {0: 1}               | Nova flecha | {0: 1, 4: 1}          |
| 5     | 4      | {0: 1, 4: 1}         | Usa flecha  | {0: 1, 3: 1}          |

**Resultado:** 2 flechas

---

## ⏳ Complexidade

* **Tempo:** `O(N)` (cada balão processado uma vez)
* **Espaço:**

  * Python: `O(N)` no pior caso
  * C: `O(max_altura)`

---

## ▶️ Como executar

### 🐍 Python

```bash
python3 baloes.py
```

### 📘 C99

```bash
gcc -std=c99 -O2 -o baloes baloes.c
./baloes
```

---

## 💡 Exemplos de Entrada/Saída

| Entrada              | Saída |
| -------------------- | ----- |
| `5`<br>`3 2 1 5 4`   | `2`   |
| `4`<br>`1 2 3 4`     | `4`   |
| `6`<br>`5 3 2 4 6 1` | `3`   |