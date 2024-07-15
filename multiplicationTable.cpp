#include <iostream>
using namespace std;

int main(){
    int p;
    int ans;
    cout << "Enter the number to multiplication table: ";
    cin >> p;
    for (int i = 1; i <=10; i++) {
        ans = p * i;
        cout << p << " x " << i << " = " << ans << endl;
    }
    return 0;
}