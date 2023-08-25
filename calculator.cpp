#include <iostream>
#include <string>

using namespace std;

int main()
{


    char op;
    float num1, num2;

    cout << "What you want to do (+,-,*,/):";
    cin >> op;

    cout << "Enter First Number-";
    cin >> num1;

    cout << "Enter Second Number-";
    cin >> num2;

    switch (op){
    case '+' :
      cout << num1 << " + " << num2 << " = " << num1 + num2;
      break;
    
    case '-':
      cout << num1 << " - " << num2 << " = " << num1 - num2;
      break;

    case '*':
      cout << num1 << " * " << num2 << " = " << num1 * num2;
      break;

    case '/':
      cout << num1 << " / " << num2 << " = " << num1 / num2;
      break;
    
    default:
      cout << "Error! operator is not correct";
      break;
    
    
    }

    return 0;
}