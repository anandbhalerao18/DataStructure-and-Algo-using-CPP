//  QUESTION => PARAMETERISED AND FUNCTIONAL RECURSION 
// PRINT THE SUM OF NUMBERS TILL THE N

    // PARAMETRISED 
// PARAMETERISED RECURSION
// #include<iostream>
// using namespace std;

// // Function to calculate the sum of numbers till n
// void printSum(int num, int sum) {
//     // Base case: if num is less than 1, print the sum and return
//     if (num < 1) {
//         cout << "Sum: " << sum << endl;
//         return;
//     }
//     // Recursive case: call the function with num-1 and sum+num
//     printSum(num - 1, sum + num);
// }

// int main() {
//     int n; // input number
//     cout << "Enter a number: ";
//     cin >> n;
//     printSum(n, 0); // call the function with n and initial sum 0
//     return 0;
// }



// FUNCTIONAL
#include <iostream>
// using namespace std;

// int sum(int i){
//     if (i == 0) return 0;
//     return i + sum(i-1);
// }

// int main (){
//     int n = 9;
//     cout << sum(9);
// }



// FACTORIAL OF N 

#include <iostream>
using namespace std;

// Function to calculate the factorial of a number
int fact(int n){
    // Check if the number is negative
    if (n < 0) {
        // If negative, print an error message and return -1
        cout << "Error: Factorial is not defined for negative numbers." << endl;
        return -1; // or throw an exception
    }
    
    // Base case: factorial of 0 and 1 is 1
    if (n == 0 || n == 1) {
        // Return 1 if n is 0 or 1
        return 1;
    }
    
    // Recursive case: n! = n * (n-1)!
    // Call the fact function with n-1 and multiply the result by n
    return n * fact(n - 1);
}

int main(){
    // Define a variable to store the number
    int n = 3;
    
    // Call the fact function with the number and store the result
    int result = fact(n);
    
    // Print the result to the console
    cout << "The factorial of " << n << " is = " << result << endl;
}