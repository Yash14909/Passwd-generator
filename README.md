
---

```markdown
# 🔐 Random Password Generator

This repository contains **two versions** of a simple password generator — one written in **Python** and another in **C++**.  
Both programs generate strong random passwords using a mix of letters, digits, and special characters.

---

## 🧩 Project Structure

```
```
Project structure:

password-generator/
│
├── password_generator.py     # Python version
├── password_generator.cpp    # C++ version
└── README.md                 # Project documentation
```
````

---

## 💻 Python Version

### 🧠 How It Works
1. Imports the `random` module.
2. Defines a string `chars` with lowercase, uppercase, digits, and special symbols.
3. Asks the user to input the desired password length.
4. Randomly selects characters and builds a password.
5. Displays the generated password.

### 🧾 Code
```python
import random

chars = 'abcdefghijklmnopqrstuvwxyz1234567890ABCDEFGHIJKLMNOPQRSTUVWXYZ~!@#$%^&*()_+-'
length = int(input("Enter length: "))
password = ""

for a in range(length):
    password += random.choice(chars)

print(password)
````

### ▶️ How to Run

1. Ensure **Python 3** is installed.
2. Save the code as `password_generator.py`.
3. Run in terminal:

   ```bash
   python password_generator.py
   ```
4. Enter your desired password length.
5. The generated password will be printed.

### 🧩 Example Output

```
Enter length: 10
Generated password: aB8!zQ1#Lp
```

---

## 💻 C++ Version

### 🧠 How It Works

1. Uses `rand()` and `srand(time(0))` to generate random numbers.
2. Combines uppercase, lowercase, digits, and special characters.
3. Randomly selects characters from this set to form a password.
4. Prints the result to the console.

### 🧾 Code

```cpp
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

string generatePassword(int length) {
    string upper = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    string lower = "abcdefghijklmnopqrstuvwxyz";
    string digits = "0123456789";
    string special = "!@#$%^&*()-_=+[]{};:,.<>?";

    // Combine all character sets
    string allChars = upper + lower + digits + special;
    string password = "";

    // Seed the random number generator
    srand(time(0));

    for (int i = 0; i < length; i++) {
        int index = rand() % allChars.length();
        password += allChars[index];
    }

    return password;
}

int main() {
    int length;

    cout << "Enter the desired password length: ";
    cin >> length;

    string password = generatePassword(length);
    cout << "Generated Password: " << password << endl;

    return 0;
}
```

### ▶️ How to Run

1. Save the file as `password_generator.cpp`.
2. Compile and run using:

   ```bash
   g++ password_generator.cpp -o password_generator
   ./password_generator
   ```
3. Enter your desired password length.
4. The program will print a random password.

### 🧩 Example Output

```
Enter the desired password length: 12
Generated Password: Zs#8yP@cW2fG
```

---

## 💡 Tips

* Use **12+ character passwords** for stronger security.
* You can modify the character sets to include or exclude certain symbols.
* For enhanced security, the Python version can use the `secrets` module instead of `random`.

---

## 📚 Concepts Covered

* Random number generation (`random` / `rand`)
* String manipulation
* Loops and input handling
* Cross-language implementation (Python & C++)

```

```


