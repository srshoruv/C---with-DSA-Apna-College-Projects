#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Input how many rows you want: ";
    cin >> n;

    for (int i=1; i<=n; i++){
        // first stars
        for(int j =1; j<=i; j++){
            cout << "*";
        }
        //spaces
        for(int j=1; j <= 2 *(n-i); j++){

            cout << " ";
        }

        //last stars
        for(int j =1; j<=i; j++){
            cout << "*";
        }
        cout << endl;
    }

    // reverse stars

    for (int i=n; i>=1; i--){
        //first stars
        for(int j =i; j>=1; j--){
            cout << "*";
        }
        //spaces
        for(int j=2 *(n-i); j >= 1; j--){

            cout << " ";
        }

        //last stars
        for(int j =i; j>=1; j--){
            cout << "*";
        }
        cout << endl;
    }
}