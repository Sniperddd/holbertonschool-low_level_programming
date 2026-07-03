<div align="center">
  <img src="https://capsule-render.vercel.app/api?type=waving&color=00599C&height=220&section=header&text=Low-Level%20Programming&fontSize=50&fontColor=ffffff&animation=fadeIn&desc=Mastering%20C%20and%20Algorithms&descAlignY=70&descAlign=50" alt="Low Level Programming Header" />
</div>

<div align="center">
  <a href="https://git.io/typing-svg">
    <img src="https://readme-typing-svg.demolab.com?font=Fira+Code&weight=600&size=24&pause=1000&color=00599C&center=true&vCenter=true&width=600&lines=Writing+Hello+World+in+C;Understanding+Pointers+%26+Memory;Allocating+Memory+with+malloc();Building+Singly+Linked+Lists;Bit+Manipulation+%26+File+I%2FO;Mastering+Data+Structures" alt="Typing SVG" />
  </a>
</div>

<div align="center">
  <p><em>The ultimate foundational vault for C programming, memory management, and data structures.</em></p>

  [![C](https://img.shields.io/badge/C-00599C?style=for-the-badge&logo=c&logoColor=white)](https://en.wikipedia.org/wiki/C_(programming_language))
  [![GCC](https://img.shields.io/badge/GCC-Compiler-F34B7D?style=for-the-badge&logo=gnu&logoColor=white)](#)
  [![Linux](https://img.shields.io/badge/Linux-FCC624?style=for-the-badge&logo=linux&logoColor=black)](https://www.kernel.org/)
  [![Betty](https://img.shields.io/badge/Betty-Compliant-4EAA25?style=for-the-badge)](#)
</div>

<br/>

## 🧠 About This Repository

This repository documents my comprehensive journey through the depths of **Low-Level Programming** using the C language. It serves as a strict, hands-on curriculum that builds an engineer's mental model from the ground up: starting with standard output (`printf`) and leading up to complex data structures (Linked Lists), dynamic memory allocation, and Bitwise operations.

Every line of code is written strictly according to the [Betty Coding Style](https://github.com/holbertonschool/Betty) and compiled on Ubuntu using `gcc -Wall -Werror -Wextra -pedantic -std=gnu89`.

---

## 🏗️ Curriculum Blueprint

Below is the complete architectural mapping of the modules contained in this repository.

### 🐣 Phase 1: The Basics
| Module | Core Concepts |
| :--- | :--- |
| **`0x00-hello_world`** | GCC compilation process (preprocessor, compiler, assembler, linker), `puts`, `printf`. |
| **`0x01-variables_if_else_while`** | Arithmetic operators, relational operators, and loops (`while`, `for`). |
| **`0x02-functions_nested_loops`** | Custom functions, scope, header files, and nested iterations. |
| **`0x03-debugging`** | Reading compiler errors, identifying edge cases, and fixing infinite loops. |
| **`0x04-more_functions_nested_loops`** | Advanced nested loops, ASCII table operations, and matrix logic. |

### 🧬 Phase 2: Memory & Pointers
| Module | Core Concepts |
| :--- | :--- |
| **`0x05` to `0x07` Pointers & Arrays** | Pointer arithmetic, dereferencing, string manipulation, and multi-dimensional arrays. |
| **`0x08-recursion`** | Base cases, call stack memory, and recursive algorithms. |
| **`0x0A-argc_argv`** | Command-line arguments (`argc`, `argv`) and execution environments. |

### 🧠 Phase 3: Dynamic Memory Allocation
| Module | Core Concepts |
| :--- | :--- |
| **`0x0B-malloc_free`** | The Heap vs The Stack, `malloc()`, `free()`, and preventing memory leaks (Valgrind). |
| **`0x0C-more_malloc_free`** | `calloc()`, `realloc()`, and advanced dynamic string and array generation. |

### ⚙️ Phase 4: Advanced Concepts
| Module | Core Concepts |
| :--- | :--- |
| **`0x09-static_libraries`** | Archiving object files (`ar rc`) and indexing (`ranlib`). |
| **`0x0D-preprocessor`** | Macros (`#define`), conditional compilation, and include guards. |
| **`0x0E-structures_typedef`** | Grouping data (`struct`), type aliases (`typedef`), and struct pointers. |
| **`0x0F` & `0x10` Functions** | Function pointers, callback logic, and Variadic functions (`stdarg.h`). |

### 🔗 Phase 5: Data Structures & System Calls
| Module | Core Concepts |
| :--- | :--- |
| **`0x12` & `0x13` Linked Lists** | Building, traversing, inserting, and freeing Singly Linked Lists. |
| **`0x14-bit_manipulation`** | Bitwise operators (`&`, `\|`, `^`, `~`, `<<`, `>>`), masks, and binary logic. |
| **`0x15-file_io`** | POSIX System Calls (`open`, `read`, `write`, `close`), file descriptors. |

---

## ⚡ Compilation Strategy

All projects are strictly compiled without standard library abstractions unless explicitly permitted. 
```bash
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 *.c -o executable
```

---

<div align="center">
  <img src="https://media.giphy.com/media/xT9IgzoKnwFNmISR8I/giphy.gif" width="350" alt="Hacker Terminal GIF" />
  <br>
  <sub><b>Memory leaks are temporary. Segmentation faults are forever.</b> 🚀</sub>
</div>
