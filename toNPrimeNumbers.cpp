#include <iostream>
using namespace std;

int main(){
    int num;
    cout << "Enter the end point of prime numbers : ";
    cin >> num;

    for (int i=2; i <= num; i++){

        bool isPrime = true;

        for ( int j = 2; j*j <= i; j++) {
            if ( i % j == 0){
                isPrime = false;
                continue;
            }
        } 
        
        if (isPrime) {
                cout << i << " ";
            }
    }   cout << endl;
    
    return 0;
}