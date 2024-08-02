// MULTIPLE RECURSSION CALLS.


// Question: WAP TO CALCULATE AND PRINT THE Nth FIBONACCI NUMBER USING RECURSION

// Answer: This code calculates and prints the nth Fibonacci number using recursion.
// Note: The Fibonacci sequence is a series of numbers in which each number is the sum of the two preceding ones, usually starting with 0 and 1.
// EXAMPLE := 1, 1, 2, 3, 5, 8, 13, 21, 34, 55
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
// Function to calculate the nth Fibonacci number
// This function uses multiple recursion calls to calculate the Fibonacci sequence
int fibonacci(int n) {
    // Base case: if n is 0 or 1, return n (since 0th and 1st Fibonacci numbers are 0 and 1 respectively)
    if (n <= 1) {
        return n;
    }
    // Recursive case: calculate the (n-1)th and (n-2)th Fibonacci numbers
    int last = fibonacci(n - 1);
    int secondLast = fibonacci(n - 2);
    
    // Return the sum of the last two Fibonacci numbers
    return last + secondLast;
}
int main() {
    // Calculate and print the nth Fibonacci number
    cout << fibonacci(10) << endl;
    return 0;
}

