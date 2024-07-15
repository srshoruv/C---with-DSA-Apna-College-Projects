#include <iostream>
using namespace std;

int main(){
    int p;
    int q;
    bool isArm = true;
    int store =0;
    cout << "Enter number to check: ";
    cin >> p;
    q = p;

    while (p > 0){
        int num = p % 10;
        store += num*num*num;
        p /= 10;
}
        if ( store == q ){
            cout << q << " is an Armstrong Number" << endl;
        } else {
            cout << q << " is NOT an Armstrong Number." << endl;
        }

    
    return 0;
}