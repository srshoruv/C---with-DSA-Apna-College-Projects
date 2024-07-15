#include <iostream>
using namespace std;

int main(){
    int num;
    int sum = 0;
    int firstNum = 0;
    int lastNum = 1;

    cout << "How many fibonacci do you want? : ";
    cin >> num;

    for (int i = 1; i <= num; i++) {

        sum = firstNum + lastNum;

        cout << sum << " ";

        firstNum = lastNum;
        lastNum = sum;
    }
    return 0;
}