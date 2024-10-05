#include <iostream>
using namespace std;

// Function declaration to take two integers and return an integer. 
int calculateLCM(int a, int b) {
// Ternary operator to initialize maximum value to greater of two numbers.
     int maxVal = (a > b) ? a : b;
     // Iterate till we find a number that is divisible by both a and b.
    while(true) {
        if (maxVal % a == 0 and maxVal % b == 0) {
            return maxVal; //LCM found
        }
        ++maxVal; //Increment in maximum value to check the next number.
    }
}
int main() {
    //Initialize variables to get two numbers.
    int a,b;
    cout<<"Enter two natural numbers to calculate their LCM: ";
    // take input
    cin>>a>>b;
    //calculate LCM 
    int lcm = calculateLCM(a , b);
    // display LCM in output
    cout<<"The LCM of "<<a<<" and "<<b<<" is: "<<lcm<<endl;

      return 0;
}
