#  VectorX — Custom C++ STL Vector Implementation

##  Why I Built This

Most developers use `std::vector` daily without knowing how it works internally.

I wanted to go deeper.

So I built **VectorX**, a complete custom implementation of a dynamic array in C++ from scratch to understand:

- How memory allocation works in real systems
- How vectors dynamically grow and manage capacity
- How STL-like containers are designed internally
- How performance and memory trade-offs are handled

This project reflects my interest in **low-level C++ development and system design thinking**.

---

##  What is VectorX?

VectorX is a custom-built **dynamic array (like std::vector)** implemented using raw pointers in C++.

It supports automatic resizing, fast access, and essential container operations.

In simple terms:

> It behaves like std::vector, but everything inside is written manually by me to understand internal working.

---

##  Why This Project Matters

This project helped me understand:

- How dynamic memory (`new` / `delete`) works in C++
- Why resizing is required in dynamic arrays
- How deep copy prevents memory issues
- How STL achieves performance efficiency
- How real-world containers are designed

It bridges the gap between **theory and real system-level understanding**.

---

##  Features Implemented (Up to Version 5)

###  Core Features
- Dynamic resizing array
- `push_back()` — insert element at end
- `pop_back()` — remove last element
- `operator[]` — direct access
- `size()` and `capacity()`

###  Memory Management
- Automatic capacity doubling
- Efficient reallocation strategy
- Safe destructor to prevent memory leaks

###  Advanced Features
- Deep copy constructor
- Assignment operator overloading
- `insert(index, value)`
- `erase(index)`
- Exception handling for invalid access

---

##  Performance Complexity

| Operation      | Time Complexity |
|----------------|----------------|
| push_back      | O(1) amortized |
| pop_back       | O(1) |
| access ([])    | O(1) |
| insert         | O(n) |
| erase          | O(n) |

---

##  Key Learning Outcomes

While building VectorX, I learned:

###  Memory Management
- Handling raw pointers safely
- Avoiding memory leaks
- Understanding heap allocation behavior

###  C++ Internals
- Deep copy vs shallow copy
- Constructor & destructor lifecycle
- Operator overloading

###  Data Structure Design
- Why vectors double capacity
- Why amortized complexity matters
- Trade-offs between speed and memory

---

##  Project Evolution (v1 → v5)

- **v1:** Basic dynamic array with push_back
- **v2:** Added resizing mechanism
- **v3:** Added operator overloading
- **v4:** Added deep copy support
- **v5:** Added insert, erase, and stability improvements

Each version improved **safety, performance, and usability**.

---

##  What This Project Represents

This project is not just code.

It represents:

- My ability to understand system-level concepts
- My interest in C++ internals and memory management
- My consistency in improving a project step-by-step
- My mindset of learning by building, not just reading

---

##  Future Improvements

- Iterator support (`begin()`, `end()`)
- Move semantics (C++11 optimization)
- Shrink-to-fit functionality
- Exception-safe strong guarantee
- STL compatibility improvements

---

##  Author

### Viraj Jamdhade

Built with ❤️ in C++  
For deep understanding of data structures and system-level programming.

---
VectorX helped me understand that:

> Real growth in programming comes when you stop using libraries and start building them.
