# include <iostream>
using namespace std;

int main() {
  char op;
  float num1, num2;
  
  cout << "Enter First Number: ";
  cin >> num1 ;
  cout<<"Enter Second Number: ";
  cin>> num2;
  cout << "Enter operator among them: \n for addition press         +\n for subtraction press      -\n";
  cout<<" for multiplication press   * \n for division press         / \n ";
  cin >> op;
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
      // If the operator is other than +, -, * or /, error message is shown
      cout << "Error! operator is not correct";
      break;
  }

  return 0;
}