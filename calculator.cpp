#include <iostream>
using namespace std;

// variables
double firstNumber, secondNumber;
int op;

// fuctions
double add();
double sub();
double multy();
double div();

int main() {
    
    while (1) {
    // input variables

    cout << "Welcome to Shoruv's Calculator app" << endl;
    cout << "Select a option below: " << endl << endl;
    cout << "1. Addition" << endl;
    cout << "2. Subtraction" << endl;
    cout << "3. Multiplication" << endl;
    cout << "4. Division" << endl;
    cout << "5. Exit" << endl << endl;
    cout << "What do you want to do? : ";
    cin >> op;


    

    // processing

    switch (op) {
        case 1: cout << firstNumber << " + " << secondNumber << " = " << add() << endl << endl; break;
        case 2: cout << firstNumber << " - " << secondNumber << " = " << sub() << endl << endl; break;
        case 3: cout << firstNumber << " x " << secondNumber << " = " << multy() << endl << endl; break;
        case 4: cout << firstNumber << " / " << secondNumber << " = " << div() << endl << endl; break;
        case 5: return 0;
        default: cout << "Invalid Expression." << endl << endl;

    }
    }

    return 0;
}

// functions
double add() {
    cout << "Input First Number: ";
    cin >> firstNumber;
    cout << "Input Second Number: ";
    cin >> secondNumber;
    return firstNumber + secondNumber;
}

double sub(){
    cout << "Input First Number: ";
    cin >> firstNumber;
    cout << "Input Second Number: ";
    cin >> secondNumber;
    return firstNumber - secondNumber;
}

double multy() {
    cout << "Input First Number: ";
    cin >> firstNumber;
    cout << "Input Second Number: ";
    cin >> secondNumber;
    return firstNumber * secondNumber;
}

double div(){
    cout << "Input First Number: ";
    cin >> firstNumber;
    cout << "Input Second Number: ";
    cin >> secondNumber;
    return firstNumber / secondNumber;
}