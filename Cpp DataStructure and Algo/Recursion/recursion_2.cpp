// Basic Recursion Problems
// QUE 1 ==> PRINT NAME FIVE TIMES 
// #include <iostream> // Include standard input/output library
// using namespace std;

// int num = 0; // Global variable to track the number of times the function is called

// // Recursive function to print "Anand" five times
// void condition() {
//     if (num == 5) return; // Base case: stop recursion when num reaches 5
    
//     cout << "Anand" << endl; // Print the  
    
//     num++; // Increment num by 1
    
//     condition(); // Recursive call to the function itself
// }

// int main() {
//     condition(); // Start the recursive process
//     return 0; // Return 0 to indicate successful execution
// }








//  QUESTION 2 => PRINT LINERLY FROM 1 TO n using recurssion
// #include <iostream>
// using namespace std;

// void Print_one_to_n(int current, int n) {
//     if (current > n) return;  // Base case: stop when current exceeds n
//     cout << current << " ";   // Print the current number
//     Print_one_to_n(current + 1, n);  // Recursive call with the next number
// }
// int main() {
//     cout << "Enter the value of N => " << endl;
//     int n;
//     cin >> n;
//     Print_one_to_n(1, n);  // Start printing from 1 to n
//     return 0;
// }


//  QUESTION 3 => print linerly form n to 1 using recurssion
// #include <iostream>
// using namespace std;

// int one = 1;
// void printing_n_to_one(int n, int one){
//     if ( n >= one ){
//         cout<<n<<" ";
//         n--;
//         printing_n_to_one(n, one);
//     }
// }

// int main(){
//     cout<<"Enter the value of n => "<<endl;
//     int n;
//     cin>>n;
//     printing_n_to_one(n, one);
// }




