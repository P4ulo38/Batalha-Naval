# 🛳️ Batalha Naval em C / Battleship in C

Este projeto é uma implementação em linguagem C do clássico jogo **Batalha Naval**, focado na aplicação de vetores, matrizes e lógica condicional.

This project is a C-language implementation of the classic **Battleship** game, focusing on the use of arrays, matrices, and control logic.

---

## 🚀 Funcionalidades | Features

- Tabuleiro 10x10 com posições inicializadas como água (0)  
  10x10 board initialized with water (0)
- Posicionamento de navios horizontais e verticais (valor 3)  
  Placement of horizontal and vertical ships (value 3)
- Três habilidades especiais com áreas de efeito (valor 5):  
  Three special skills with area-of-effect (value 5):

  - 🎯 Cone | Cone-shaped attack  
  - ✝️ Cruz | Cross-shaped attack  
  - 💎 Octaedro | Octahedron (diamond) attack  

---

## 💡 Lógica Visual | Visual Markers

| Símbolo | Descrição             | Description             |
|--------|------------------------|-------------------------|
| `~`    | Água                   | Water                   |
| `N`    | Parte de um navio      | Ship segment            |
| `*`    | Área de habilidade     | Skill area (AoE effect) |

---

## 🧠 Conceitos trabalhados | Concepts Applied

- Arrays unidimensionais e bidimensionais  
  1D and 2D arrays
- Estruturas de repetição e condicionais  
  Loops and conditionals
- Funções reutilizáveis e modularização  
  Modularized, reusable functions
- Controle de bordas e sobreposição  
  Bounds checking and overlapping avoidance

---

## 🖥️ Execução | How to Run

### Compilação | Compile

```bash
gcc BatalhaNaval.c -o batalha
./batalha
