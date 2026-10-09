# C++ Generic Stack Implementation (`clsMyStack`)

A custom, template-based **Stack** data structure in C++ that inherits from `clsMyQueue`[span_0](start_span)[span_0](end_span). It follows the **LIFO (Last-In, First-Out)** principle by overriding insertion mechanisms while leveraging the underlying `clsMyQueue` and `clsDblLinkedList` functionalities[span_1](start_span)[span_1](end_span).

---

## 🚀 Features

* **Generic Type Support**: Built using C++ Templates (`template <class T>`) to accept any data type[span_2](start_span)[span_2](end_span).
* **Inheritance Structure**: Inherits directly from `clsMyQueue<T>` (`public clsMyQueue<T>`), achieving code reusability while adapting behavior for LIFO operations[span_3](start_span)[span_3](end_span).
* **LIFO Mechanism**: Overrides `push` to insert elements at the beginning, ensuring top-level access[span_4](start_span)[span_4](end_span).
* **Inherited Utilities**: Access to all queue utilities such as `pop()`, `Print()`, `Size()`, `IsEmpty()`, `Reverse()`, and `Clear()` inherited from `clsMyQueue`[span_5](start_span)[span_5](end_span).

---

## 🛠️ Public Methods Summary

### Stack Specific Methods
| Method | Description |
| :--- | :--- |
| `push(T Item)` | Pushes a new element onto the top of the stack (inserts at the beginning)[span_6](start_span)[span_6](end_span). |
| `Top()` | Returns the element at the top of the stack (calls `front()`)[span_7](start_span)[span_7](end_span). |
| `Bottom()` | Returns the element at the bottom of the stack (calls `back()`)[span_8](start_span)[span_8](end_span). |

### Inherited Methods (from `clsMyQueue`)
| Method | Description |
| :--- | :--- |
| `pop()` | Removes the top element from the stack[span_9](start_span)[span_9](end_span). |
| `Size()` | Returns the total number of elements in the stack[span_10](start_span)[span_10](end_span). |
| `IsEmpty()` | Checks if the stack is empty[span_11](start_span)[span_11](end_span). |
| `Print()` | Displays all elements in the stack[span_12](start_span)[span_12](end_span). |
| `Reverse()` | Reverses the elements order inside the stack[span_13](start_span)[span_13](end_span). |
| `Clear()` | Removes all elements from the stack[span_14](start_span)[span_14](end_span). |

---

## 💻 Usage Example

```cpp
#include <iostream>
#include "clsMyStack.h"

using namespace std;

int main() {
    clsMyStack<int> myStack;

    // Push elements onto the stack
    myStack.push(10);
    myStack.push(20);
    myStack.push(30);

    cout << "Stack contents: ";
    myStack.Print(); // Output: 30 20 10

    cout << "Top item: " << myStack.Top() << endl;       // Output: 30
    cout << "Bottom item: " << myStack.Bottom() << endl; // Output: 10

    // Pop element from top
    myStack.pop();
    cout << "After pop, Top item: " << myStack.Top() << endl; // Output: 20

    return 0;
}

⚙️ Dependencies & Requirements
• ​Dependencies: Requires clsMyQueue.h and clsDblLinkedList.h in the same directory. 
• ​Language: C++11 or higher
• ​Compiler: Compatible with Visual Studio, GCC, Clang, or any standard C++ compiler
