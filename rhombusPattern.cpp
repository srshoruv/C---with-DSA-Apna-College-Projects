#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter how many stars you want: ";
    cin >> n;

    for (int i=1; i <= n; i++){

        //spaces
        for( int j = n; j >= i; j--){
            cout  << " ";
        }
        //stars
        for(int j = 1; j <= n; j++) {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}