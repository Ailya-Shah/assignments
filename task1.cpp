#include <iostream>
int main() {
    using namespace std;
    // Initialize a variable to ask user for no. of terms for sequence.
    int N;
    // Using a loop to prompt user again if he enters 0 or negative number.
    do {
        cout<<"Enter the number of terms for Fibonacci sequence:";
        cin>>N;
        if (N<=0) {
            cout<<"Please enter a natural number: "<<endl;
        }
    } while (N<=0);
    // Initialize the variables for first two terms of Fibonacci sequence.
    int a = 0, b = 1;
    cout<<"Fibonacci series:";
    // In case user enters one the output will be 0.
    if (N==1) {
        cout<<a<<endl;
    } else {
        cout<<a<<" "<<b;
        for (int i = 2; i<N; ++i) {
            int next = a + b;
            cout<<" "<<next;
            a = b;
            b = next;
        } // To ensure the output ends with a newline.
        cout<<endl;
    }
    return 0;
}
