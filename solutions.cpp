1.Print even numbers from 1 to 100:
#include <iostream>
using namespace std;
int main() {
    int n = 100;
    for (int i=0; i%2==0 && i<=n; i+=2) {
        cout << i << endl;
    }
    return 0;
}
2. Sum of numbers from 1 to 100
#include <iostream>
using namespace std;
int main() {
    int n = 100;
    int sum = 0;
    int i = 1;
    while (i<=n) {
        sum+=i;
        i++;
    }
    cout<< sum << endl;
    return 0;
} 
3. calculate factorial of numbers upto 20
#include <iostream>
using namespace std;
int main() {
    int N;
    cout<<"Please enter a natural number to calculate factorial. ";
    cin>>N;
    long long sum = 1;
    for (int i = 1; i<=N; i++ ) {
        sum*=i;
    }
    cout<< sum <<endl;
    return 0;
}
4.#include <iostream>
using namespace std;
int main() {
    int N;
    cout<<"Enter a number to calculate Fabonacci series upto it: ";
    cin >> N;
    if (N>=0) {
       cout << 0;
    }
    if (N>=1) {
        cout << " ," << 1;
    }
    int first = 0, second = 1, next = first + second;
    int i=3;
    while (i<=N) {
        cout << ", " << next;
        first = second;
        second = next;
        next = first + second;
        i++;
    }
    cout<< endl ;
    return 0;
} 
4. #include <iostream>
using namespace std;

int calculateFactorial(int N) {

int sum =1;
for (int i=1; i<=N; i++) {
    sum*=i;
}
    return sum;
}
int main() {
    int N;
    cout << "Enter a numb to calculate factorial: ";
    cin>>N;
    cout<<"factorial is: "<< calculateFactorial(N);
    return 0;
}
5. print triangle with hollow effect
#include <iostream>
using namespace std;
int main() {
    int height;
    cout << "Enter the height of a pyramid: ";
    cin >> height;
    for (int i=1; i<=height; i++) {
        for (int j=i; j<height; j++) {
            cout << " ";
        }
        for (int k=1; k <= (2*i-1); k++) {
            if (k==1 || k== (2*i-1) || i==height){
                cout << "*";
            }
        else {
            cout << " ";
             }
        }
        cout << endl;
    }
    return 0;
} 
6. number version of same code
#include <iostream>
using namespace std;
int main() {
    int height;
    cout << "Enter the height of a pyramid: ";
    cin >> height;
    for (int i=1; i<=height; i++) {
        for (int j=i; j<height; j++) {
            cout << " " ;
        }
        for (int k=1; k <= (2*i-1); k++) {
            if (k==1 || k== (2*i-1) || i==height){
                cout << i;
            }
        else {
            cout << " ";
             }
        }
        cout << endl;
    }
    return 0;
}7. checking for prime number
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int N;
    cout << "Enter a number to check if it's prime: ";
    cin >> N;

    if (N <= 1) {
        cout << N << " is not a prime number." << endl;
    }
    else if (N <= 3) {
        cout << N << " is a prime number." << endl;
    }
    else if (N % 2 == 0) {
        cout << N << " is not a prime number." << endl;
    }
    else {
        int i = 3;
        while (i <= sqrt(N)) {
            if (N % i == 0) {
                cout << N << " is not a prime number." << endl;
                break;
            }
            i += 2;
        }
        
        // If we reach this point, no factors were found
        if (i > sqrt(N)) {
            cout << N << " is a prime number." << endl;
        }
    }

    return 0;
}
