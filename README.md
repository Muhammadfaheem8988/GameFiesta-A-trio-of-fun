# GameFiesta-A-trio-of-fun
# Multi-Game Console Suite 🎮

A collection of classic arcade-style games developed in C++. This suite features a centralized menu system that allows users to switch between different games seamlessly.

## 🚀 Features

The suite currently includes three fully functional console games:

* **Rock Paper Scissor**: A competitive 5-round match against the computer with automated scoring.
* **Tic Tac Toe**: A two-player local multiplayer game featuring a dynamic 3x3 grid.
* **Number Guessing**: A logic-based game where players have 3 attempts to find a hidden number between 1 and 10.

## 📂 Project Structure

The project is organized to keep the game logic modular and clean:

```text
GameSuite/
├── src/
│   ├── main.cpp            # Entry point and Menu System
│   ├── rockclass.cpp       # Rock Paper Scissor Engine
│   ├── TICclass.cpp        # Tic Tac Toe Engine
│   └── guessingclass.cpp   # Number Guessing Engine
├── .gitignore              # Keeps the repo clean of build files
└── README.md               # Documentation
🛠️ Requirements & Installation
Prerequisites
A C++ compiler (e.g., GCC/G++, MinGW, or Clang).

Note: This project utilizes <conio.h> and system("CLS"), making it optimized for Windows environments.

Setup
Clone the repository:

Bash
git clone [https://github.com/YOUR_USERNAME/GameSuite.git](https://github.com/YOUR_USERNAME/GameSuite.git)
Navigate to the source directory:

Bash
cd GameSuite/src
Compile the project:

Bash
g++ main.cpp -o GameSuite
Run the suite:

Bash
./GameSuite
🎮 How to Play
Enter your name when prompted (for Tic Tac Toe).

Use the numeric menu to select your desired game.

Follow the on-screen instructions for each specific game.

After a game ends, you can choose to return to the main menu or exit.

👤 Author
Muhammad Ahmad

Electrical Technician & Developer

Currently working on the Hazara University Website Redesign Project.

Developed as part of a C++ programming portfolio.