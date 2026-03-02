# 🎮 GameFiesta — A Trio of Fun

<p align="center">
  <img src="https://img.shields.io/badge/Language-C++-00599C?style=for-the-badge&logo=cplusplus&logoColor=white" alt="C++">
  <img src="https://img.shields.io/badge/License-MIT-green?style=for-the-badge" alt="MIT License">
  <img src="https://img.shields.io/badge/Games-3-red?style=for-the-badge&logo=game&logoColor=white" alt="3 Games">
  <img src="https://img.shields.io/badge/Platform-Windows-0078D6?style=for-the-badge&logo=windows&logoColor=white" alt="Windows">
</p>

<p align="center">
  <b>A collection of classic arcade-style console games developed in C++.</b><br>
  Featuring a centralized menu system that lets you switch between games seamlessly.
</p>

---

## 📖 Table of Contents

- [🎯 Games Included](#-games-included)
- [📂 Project Structure](#-project-structure)
- [⚙️ Requirements & Installation](#️-requirements--installation)
- [🕹️ How to Play](#️-how-to-play)
- [🤝 Contributing](#-contributing)
- [📄 License](#-license)
- [👤 Author](#-author)

---

## 🎯 Games Included

The suite features **three fully functional console games**, each built with object-oriented design:

| # | Game | Description | Highlights |
|---|------|-------------|------------|
| 🪨 | **Rock Paper Scissors** | Battle against the computer in a best-of-5 showdown | Automated scoring, random AI opponent |
| ❌ | **Tic Tac Toe** | Classic two-player strategy on a 3×3 grid | Local multiplayer, dynamic board display |
| 🔢 | **Number Guessing** | Find the hidden number between 1 and 10 | 3 attempts per round, logic-based challenge |

---

## 📂 Project Structure

The project follows a clean, modular architecture with each game engine in its own header file:

```text
GameFiesta-A-trio-of-fun/
├── src/
│   ├── main.cpp                    # 🚀 Entry point & Menu System
│   ├── rock_paper_scissor_class.h  # 🪨 Rock Paper Scissors Engine
│   ├── TIC_TAC_TOE_class.h         # ❌ Tic Tac Toe Engine
│   └── number_guessing_class.h     # 🔢 Number Guessing Engine
├── .gitignore                      # Build file exclusions
├── LICENSE                         # MIT License
└── README.md                       # Documentation
```

### Architecture Overview

- **`main.cpp`** — Central hub with a menu-driven interface that instantiates and launches each game
- **`rock_paper_scissor_class.h`** — Encapsulates the Rock Paper Scissors logic with computer AI and round tracking
- **`TIC_TAC_TOE_class.h`** — Manages the game board, player turns, and win/draw detection
- **`number_guessing_class.h`** — Handles random number generation, attempt tracking, and hint feedback

---

## ⚙️ Requirements & Installation

### Prerequisites

| Requirement | Details |
|-------------|---------|
| **Compiler** | GCC/G++, MinGW, or Clang |
| **Platform** | Windows (uses `<conio.h>` and `system("CLS")`) |
| **Standard** | C++11 or later |

> **⚠️ Note:** This project utilizes `<conio.h>` and `system("CLS")`, making it optimized for **Windows environments**.

### Quick Start

**1. Clone the repository:**

```bash
git clone https://github.com/Muhammadfaheem8988/GameFiesta-A-trio-of-fun.git
```

**2. Navigate to the source directory:**

```bash
cd GameFiesta-A-trio-of-fun/src
```

**3. Compile the project:**

```bash
g++ main.cpp -o GameFiesta
```

**4. Run the suite:**

```bash
./GameFiesta
```

---

## 🕹️ How to Play

1. **Launch** the application and enter your name when prompted
2. **Select** a game from the numeric menu:
   - `1` → Rock Paper Scissors
   - `2` → Tic Tac Toe
   - `3` → Number Guessing
3. **Follow** the on-screen instructions for your chosen game
4. **Return** to the main menu after each game or choose to exit

### 🪨 Rock Paper Scissors
- Choose your move (Rock, Paper, or Scissors) each round
- Play a best-of-5 match against the computer
- Scores are tracked automatically — see who wins the series!

### ❌ Tic Tac Toe
- Two players take turns placing **X** and **O** on the 3×3 grid
- Enter the cell number (1–9) to make your move
- First to align three in a row, column, or diagonal wins!

### 🔢 Number Guessing
- The computer picks a random number between 1 and 10
- You have **3 attempts** to guess correctly
- Use logic and hints to narrow it down

---

## 🤝 Contributing

Contributions are welcome! Here's how you can help:

1. **Fork** the repository
2. **Create** a feature branch (`git checkout -b feature/new-game`)
3. **Commit** your changes (`git commit -m 'Add awesome new game'`)
4. **Push** to the branch (`git push origin feature/new-game`)
5. **Open** a Pull Request

### Ideas for Contributions
- 🆕 Add new games to the suite (Hangman, Quiz, Snake, etc.)
- 🐧 Add cross-platform support (Linux/macOS compatibility)
- 🎨 Enhance the console UI with colors and animations
- 🧪 Add unit tests for game logic

---

## 📄 License

This project is licensed under the **MIT License** — see the [LICENSE](LICENSE) file for details.

```
MIT License — Copyright (c) 2026 Muhammad Faheem
```

---

## 👤 Author

**Muhammad Faheem**

- 🧠 AI Engineer & Developer
- 💻 GitHub: [@Muhammadfaheem8988](https://github.com/Muhammadfaheem8988)


---

<p align="center">
  ⭐ If you enjoy these games, please consider giving the repo a star!
</p>
