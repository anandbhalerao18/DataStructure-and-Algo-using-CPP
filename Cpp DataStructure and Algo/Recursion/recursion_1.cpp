// Definition of Recursion:
// Recursion is a programming technique where a function calls itself to solve a problem. 
// It is often used for tasks that can be broken down into similar sub-tasks.

// Key Components of Recursion:
// 1. Base Case: The condition that stops the recursion. Without a base case, the function would call itself indefinitely.
// 2. Recursive Case: The part of the function where it calls itself with modified arguments to move towards the base case.

// Example of Recursion without Base Case:
// void print() {
//     cout << "1" << endl;
//     print(); // This will cause infinite recursion because there is no base case.
// }
// Calling print() will lead to a stack overflow error.

// Stack Overflow:
// This occurs when the program runs out of memory in the call stack due to excessive function calls.
// Each recursive call adds a new frame to the call stack. Without a base case, the stack fills up and causes an overflow.

#include <bits/stdc++.h> // Includes all standard libraries in C++
using namespace std;

int cnt = 0; // Global variable to keep track of recursion depth

// Recursive function to print numbers from 0 to 9
void condition() {
    if (cnt == 10) return; // Base case: stop recursion when cnt reaches 10
    
    cout << cnt << endl; // Print the current value of cnt
    
    cnt++; // Increment cnt by 1
    
    condition(); // Recursive call to the function itself
}

int main() {
    condition(); // Start the recursive process
}

// Recursion Tree:
// condition(0)
//   └─ condition(1)
//       └─ condition(2)
//           └─ condition(3)
//               └─ condition(4)
//                   └─ condition(5)
//                       └─ condition(6)
//                           └─ condition(7)
//                               └─ condition(8)
//                                   └─ condition(9)
//                                       └─ condition(10)  // Base case reached, return
