# 📚 SimpleStack — C++ Stack Implementation

A beginner-friendly demonstration of the **Stack data structure** in C++, modeled as a word-typing simulator with undo functionality.

---

## 📖 About

This project implements a fixed-size stack using a plain array in C++. It uses the analogy of **typing and undoing words** to make the classic LIFO (Last In, First Out) concept easy to understand.

No STL, no dynamic memory — just the raw logic of a stack from scratch.

---

## 🚀 Features

- `push(word)` — Add a word to the top of the stack (like typing)
- `pop()` — Remove the most recent word (like pressing Ctrl+Z)
- `peek()` — View the current top word without removing it
- Fixed capacity of **5 elements**
- Overflow and underflow are handled gracefully (no crashes)

---

## 🧠 How It Works

A stack follows **LIFO** — the last item added is the first one removed.

```
push("Apple")  → [ Apple ]
push("Banana") → [ Apple | Banana ]
peek()         → "Current word: Banana"
pop()          → "Undid: Banana"
peek()         → "Current word: Apple"
```

The internal `top` pointer starts at `-1` (empty) and moves up/down as items are pushed and popped.

---

## 🛠️ Getting Started

### Prerequisites
- A C++ compiler (g++, clang++, or MSVC)
- C++11 or later

### Compile & Run

```bash
g++ -o simple_stack main.cpp
./simple_stack
```

### Expected Output

```
Typed: Apple
Typed: Banana
Current word: Banana
Undid: Banana
Current word: Apple
```

---

## 📁 Project Structure

```
SimpleStack/
├── main.cpp      # Full source code
└── README.md     # Project documentation
```

---

## 📌 Concepts Demonstrated

| Concept | Description |
|---|---|
| Stack (LIFO) | Last In, First Out data structure |
| Array-based stack | Manual implementation without STL |
| Push / Pop / Peek | Core stack operations |
| Boundary checking | Prevents overflow and underflow |
| OOP in C++ | Class, private/public members |

---

## 🎯 Who Is This For?

- Students learning **Data Structures** for the first time
- Anyone studying for a **Computer Engineering** course
- Developers who want to see a stack built from scratch before using `std::stack`

---

## 📜 License

This project is open source and available under the [MIT License](LICENSE).
