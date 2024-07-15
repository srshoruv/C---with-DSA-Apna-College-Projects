#include <iostream>
using namespace std;

int main(){
     // variables with input
    int n;
    bool isPrime = true ;

    while (true) {
    cout << "Input the a number to check prime: ";
    cin >> n;

    for (int i = 2; i <= n-1; i++){
        if (n % i == 0) {
            isPrime = false;
            break;
        }
    } 
    if (isPrime) {
        cout << n << " is a Prime number" << endl;
    } else {
        cout << n << " is NOT a Prime number" << endl;
    }
    }
    return 0;
}
