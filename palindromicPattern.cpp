#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter how many rows you want: ";
    cin >> n;

    for (int i=1; i <=n; i++){

        //spaces
        for (int j= 1; j <= n-i; j++){
            cout << " ";
        }
        // backward numbers
        for (int j=i; j>=1; j--){
            cout << j;
        }
        //forward numbers
        for (int j=2; j<=i; j++){
            cout << j;
        }
        cout << endl;
    }
    return 0;
}