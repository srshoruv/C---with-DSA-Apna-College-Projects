#include <iostream>
using namespace std;

int main(){
     // variables with input
    int n;
    int ans = 1;
   
    cout << "Input the a number to make factorial: ";
    cin >> n;

    for (int i = n; i >=1; i--){
        ans *= i;
    }

    cout << "The factorial of " << n << " is: " << ans << endl;

    return 0;

}