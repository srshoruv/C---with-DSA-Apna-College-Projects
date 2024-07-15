#include <iostream>
using namespace std;

int main(){
    int num;
    int sum = 2;


    cout << "Enter the end point of prime numbers : ";
    cin >> num;

    for (int i=2; i <= num; i++){
        
        if ( i % 2 == 0 && i != 2) {
            continue;
        } 
        cout << i << " ";
    }   
    
    return 0;
}