# include <iostream>
using namespace std;

int main() {

  char op;
  float num1, num2;

  cout << "Enter Your Number : ";
  cin >> num1;
  cout << "Entert Your Sec Number : ";
  cin >> num2;
  cout << "Enter operator: +, -, *, /: ";
  cin >> op;

  cout<<"Yaaa! Your Answer is : ";

  switch(op) {

    case '+':
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
      cout << "Error! Please check the operator you entered";
      break;
  }
  

  return 0;
}
