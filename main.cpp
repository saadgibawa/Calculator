#include <iostream>
using namespace std;

int main(){
    double num1, num2;
    char op;
    char choice;
    do{
        cout << "Welcome to the calculator application" << endl;
        cout << "Enter the first number : " << endl;
        cin >> num1;
        cout << "Enter the operator (+,-,*,/) : " << endl;
        cin >> op;
        cout << "Enter the second number : " << endl;
        cin >> num2;
    
        switch(op){
        case '+':
            cout << "Result : " << num1 + num2 << endl;
            break;
        case '-':
            cout << "Result : " << num1 - num2 << endl;
            break;
        case '*':
            cout << "Result : " << num1 * num2 << endl;
            break;
        case '/':
            if(num2 != 0){
                cout << "Result : " << num1 / num2 << endl;
                break;
            }
            else{
                cout << "Erorr : Division by zero is not allowed" << endl;
            }
            break;
        default:
            cout << "Error : Invalid operator!" << endl;
            break;
        }
        cout << " Do you want to perform another calculation? (y/n) : " << endl;
        cin >> choice;
    }
    while(choice == 'y' || choice == 'Y');
    cout << "Exiting the Application!" << endl;
    return 0;
}