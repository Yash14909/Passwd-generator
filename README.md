
# 🐍 Snake-Water-Gun Game

A simple terminal-based **Snake-Water-Gun** game built with Python. This is a fun variation of the classic Rock-Paper-Scissors game, where:

- 🐍 Snake drinks Water  
- 💦 Water douses Gun  
- 🔫 Gun kills Snake  

---

## 🎮 How to Play

1. **Run the game** in a Python environment.
2. **Choose your move** by typing:
   - `s` for Snake
   - `w` for Water
   - `g` for Gun
3. The computer randomly selects its move.
4. The winner is decided based on classic rules:
   - Snake beats Water
   - Water beats Gun
   - Gun beats Snake
   - Same choices result in a draw

---

## 🧠 Game Logic

- Inputs are mapped as:
  - Snake = `1`
  - Water = `-1`
  - Gun = `0`
- The result is decided using simple conditional logic based on these values.

---

## 💻 Example Output

```
Enter your choice: s
Your choice is s and computer choice is w
You won!
```

---

## ▶️ Run the Game

```bash
python filename.py
```

> Replace `filename.py` with the actual file name, e.g., `snake_water_gun.py`.

---

## 📁 File Info

- Language: Python
- Dependencies: None (uses built-in `random` module only)

---

## 🛠️ Future Enhancements

- Add score tracking
- Play multiple rounds
- GUI version using Tkinter or PyGame
- Sound effects and animations

---

## 📄 .gitignore

To avoid tracking unnecessary or sensitive files, this project includes a `.gitignore` file. It ensures Git ignores:

- Python bytecode (`__pycache__/`, `*.pyc`)
- Virtual environments (`venv/`, `.venv/`)
- Editor settings (`.vscode/`, `.idea/`)
- System files (e.g., `.DS_Store`, `Thumbs.db`)
- Environment and secrets files (`.env`)

### Sample `.gitignore` content:

```gitignore
# Python bytecode
__pycache__/
*.py[cod]

# Virtual environments
venv/
.venv/

# Editor folders
.vscode/
.idea/

# System files
.DS_Store
Thumbs.db

# Environment variables
.env
```
