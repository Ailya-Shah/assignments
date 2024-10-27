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
