#include <iostream>
using namespace std;

int main(){
    // variables with input
    int n;
    int sum =0;
    cout << "Input the odd number to process: ";
    cin >> n;

    //loop to calculate
    while (n > 0) {
    
        int lastN = n % 10; // identifing the last digit
        n = n / 10; // getting rid from last digit

        if (lastN % 2 !=0) { // only for odd numbers
            sum += lastN;
        }

    }
    cout << "The sum is " << sum << endl;
    return 0;
}