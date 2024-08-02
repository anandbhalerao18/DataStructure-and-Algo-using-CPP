// RECURSION PROJBLEMS 
// 1. REVERSE AN ARRAY 
// example => given array = 1, 2, 3, 4, 5
// array reversed => 5  4  3  2  1
// logic for this is make the given array index[0] at element = A and the last element in index[4] be B
// now just swap the A and B then next make index[1] = A and then the last second index[3] = B
// this is done by swaping A with B, there are 2 elements used A and B.

// RECURSION PROBLEM: REVERSE AN ARRAY
// Example: given array = 1, 2, 3, 4, 5
// Array reversed => 5, 4, 3, 2, 1

// #include <iostream>
// using namespace std;

// // Function to reverse the array using recursion
// void reverseArray(int i, int arr[], int n) {
//     // Base case: if we have reached the middle of the array, stop recursing
//     if (i >= n / 2) {
//         return;
//     }
    
//     // Swap the elements at index i and n-i-1 (i.e., mirror positions)
//     swap(arr[i], arr[n - i - 1]);
    
//     // Recurse with the next index
//     reverseArray(i + 1, arr, n);
// }

// int main() {
//     // Get the size of the array from the user
//     int n;
//     cin >> n;
    
//     // Create an array of size n
//     int arr[n];
    
//     // Read the array elements from the user
//     for (int i = 0; i < n; i++) {
//         cin >> arr[i];
//     }
    
//     // Call the function to reverse the array
//     reverseArray(0, arr, n);
    
//     // Print the reversed array
//     for (int i = 0; i < n; i++) {
//         cout << arr[i] << " ";
//     }
    
//     return 0;
// }



// QUESTION 2 =  CHECK IF THE STRING IS PALANDROME
// Include the necessary header files for input/output and string manipulation
#include <iostream>
#include <string>

// Use the standard library namespace to avoid std:: prefixes
using namespace std;

// Function to check if a string is a palindrome
// Returns true if the string is a palindrome, false otherwise
bool isPalindrome(int index, string& str) {
    // Base case: if we've checked up to the middle of the string, it's a palindrome
    if (index >= str.size() / 2) {
        return true;
    }
    
    // If the characters at the current index and its mirrored index don't match, it's not a palindrome
    if (str[index] != str[str.size() - index - 1]) {
        return false;
    }
    
    // Recursively check the next index
    return isPalindrome(index + 1, str);
}

int main() {
    // Test string to check for palindrome
    string testStr = "madam";
    
    // Call the isPalindrome function with the initial index (0) and the test string
    bool result = isPalindrome(0, testStr);
    
    // Print the result (1 for true, 0 for false)
    cout << result << endl;
    
    return 0;
}

