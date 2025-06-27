# 🛳️ Batalha Naval em C / Battleship in C

Este projeto é uma implementação em linguagem C do clássico jogo **Batalha Naval**, focado na aplicação de vetores, matrizes e lógica condicional.

This project is a C-language implementation of the classic **Battleship** game, focusing on the use of arrays, matrices, and control logic.

---

## 🚀 Funcionalidades | Features

- Tabuleiro 10x10 com posições inicializadas como água (`0`)  
  10x10 board initialized with water (`0`)
- Posicionamento de navios horizontais e verticais (`3`)  
  Placement of horizontal and vertical ships (`3`)
- Três habilidades especiais com áreas de efeito (`5`):  
  Three special skills with area-of-effect (`5`):
  - 🎯 Cone | Cone-shaped attack  
  - ✝️ Cruz | Cross-shaped attack  
  - 💎 Octaedro | Octahedron (diamond) attack  

---

## 💡 Lógica Visual | Visual Markers

| Símbolo | Descrição             | Description             |
|--------:|------------------------|--------------------------|
| `~`     | Água                   | Water                    |
| `N`     | Parte de um navio      | Ship segment             |
| `*`     | Área de habilidade     | Skill area (AoE effect)  |

---

## 🧠 Conceitos Trabalhados | Concepts Applied

- Arrays unidimensionais e bidimensionais  
  1D and 2D arrays  
- Estruturas de repetição e condicionais (`for`, `if`)  
  Loops and conditionals  
- Funções reutilizáveis e modularização  
  Modularized, reusable functions  
- Controle de bordas e sobreposição  
  Bounds checking and overlapping avoidance  

---

## 🖥️ Execução | How to Run

### 🔧 Compilação | Compile

```bash
gcc BatalhaNaval.c -o batalha
```

### ▶️ Executar | Run

```bash
./batalha
```



## 📸 Exemplo de Saída | Example Output

```
~ ~ ~ ~ ~ ~ ~ ~ ~ ~
~ ~ ~ ~ ~ ~ ~ ~ ~ ~
~ ~ ~ N N N ~ ~ ~ ~
~ ~ ~ ~ ~ * ~ ~ ~ ~
~ ~ ~ * * * ~ ~ ~ ~
~ ~ ~ ~ * ~ ~ ~ ~ ~
~ ~ ~ ~ ~ ~ ~ ~ ~ ~
~ ~ * ~ ~ ~ ~ ~ ~ ~
~ ~ ~ ~ ~ ~ ~ ~ ~ ~
~ ~ ~ ~ ~ ~ ~ ~ ~ ~
```

---

## 👨‍💻 Autor | Author

Desenvolvido por **P4ulo38**  
Developed by **P4ulo38**  
Projeto criado como parte do *Desafio de Programação em C — Níveis Novato a Mestre*.  
Created as part of the *C Programming Challenge — From Beginner to Master levels*.

---

## 🚀 Licença | License

Projeto com fins educacionais.  
Educational use only.  
**Sinta-se livre para estudar, adaptar e compartilhar.**  
**Feel free to study, adapt, and share!**
