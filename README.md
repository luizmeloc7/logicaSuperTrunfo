
# 🃏 Super Trunfo - Comparações Avançadas em C

Este projeto é a conclusão do desafio de programação em C, baseado no jogo Super Trunfo. Ele implementa a comparação entre duas cartas de países com **atributos múltiplos**, menus dinâmicos, uso de `switch`, operador ternário e lógica condicional sofisticada.

---

## 📌 Funcionalidades

- Permite ao jogador escolher **dois atributos diferentes** para comparar.
- A comparação considera:
  - Valor **maior** vence (exceto para Densidade Demográfica).
  - Atributos são comparados individualmente e depois **somados**.
- Exibe:
  - Nome dos países
  - Valores dos dois atributos escolhidos
  - Soma dos atributos
  - Resultado final da comparação
- Implementa menus dinâmicos usando `switch`.
- Usa o operador ternário para tornar o código mais elegante.
- Trata empates com uma mensagem clara.

---

## 🚀 Como compilar e executar

1. **Clone este repositório**:
   ```bash
   git clone https://github.com/seu-usuario/super-trunfo-avancado.git
   cd super-trunfo-avancado
   ```

2. **Compile o código em C**:
   ```bash
   gcc super_trunfo_comparacao.c -o super_trunfo
   ```

3. **Execute o programa**:
   ```bash
   ./super_trunfo
   ```

---

## 🧾 Atributos disponíveis para comparação

| Código | Atributo                | Regra                        |
|--------|-------------------------|------------------------------|
| 1      | População               | Maior valor vence            |
| 2      | Área                    | Maior valor vence            |
| 3      | PIB                     | Maior valor vence            |
| 4      | Densidade Demográfica   | **Menor valor vence**        |

⚠️ **Nota**: O segundo atributo deve ser diferente do primeiro.

---

## 💻 Exemplo de uso

```
=== SUPER TRUNFO - COMPARAÇÃO DE CARTAS ===
Atributos disponíveis:
1 - População
2 - Área
3 - PIB
4 - Densidade Demográfica (vence o menor!)

Escolha o primeiro atributo (1 a 4): 2
Escolha o segundo atributo (diferente do primeiro):
1 - População
3 - PIB
4 - Densidade Demográfica
3

Comparação entre: Brasil vs Argentina

Primeiro atributo:
Brasil: 8515767.00
Argentina: 2780000.00

Segundo atributo:
Brasil: 2200.50
Argentina: 550.20

Soma dos Atributos:
Brasil: 8517967.50
Argentina: 2780550.20

Resultado da rodada:
Brasil venceu!
```

---

## 📂 Arquivos do projeto

- `super_trunfo_comparacao.c` — código-fonte em C.
- `README.md` — este arquivo de explicação.

---

## 🛠 Tecnologias usadas

- Linguagem C
- GCC para compilação
- Terminal para execução interativa

