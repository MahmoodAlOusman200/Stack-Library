# C++ Generic Stack Implementation (`clsMyStack`)

A custom, template-based **Stack** data structure in C++ that inherits from `clsMyQueue`. It follows the **LIFO (Last-In, First-Out)** principle by overriding insertion mechanisms while leveraging the underlying `clsMyQueue` and `clsDblLinkedList` functionalities).

---

## 🚀 Features

* **Generic Type Support**: Built using C++ Templates (`template <class T>`) to accept any data type.
* **Inheritance Structure**: Inherits directly from `clsMyQueue<T>` (`public clsMyQueue<T>`), achieving code reusability while adapting behavior for LIFO operations.
* **LIFO Mechanism**: Overrides `push` to insert elements at the beginning, ensuring top-level access.
* **Inherited Utilities**: Access to all queue utilities such as `pop()`, `Print()`, `Size()`, `IsEmpty()`, `Reverse()`, and `Clear()` inherited from `clsMyQueue`.

---

## 🛠️ Public Methods Summary

### Stack Specific Methods
| Method | Description |
| :--- | :--- |
| `push(T Item)` | Pushes a new element onto the top of the stack (inserts at the beginning).|
| `Top()` | Returns the element at the top of the stack (calls `front()`).|
| `Bottom()` | Returns the element at the bottom of the stack (calls `back()`).|

### Inherited Methods (from `clsMyQueue`)
| Method | Description |
| :--- | :--- |
| `pop()` | Removes the top element from the stack.|
| `Size()` | Returns the total number of elements in the stack.|
| `IsEmpty()` | Checks if the stack is empty.|
| `Print()` | Displays all elements in the stack.|
| `Reverse()` | Reverses the elements order inside the stack.|
| `Clear()` | Removes all elements from the stack[span_14].|

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

