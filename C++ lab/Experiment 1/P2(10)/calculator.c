# include <iostream>
using namespace std;
int main()
{
    char oper;
    float num1, num2;
	cout << "Enter operator either + or - or * or /: ";
    cin >> oper;
	cout << "Enter two values: ";
    cin >> num1 >> num2;
	switch(oper)
    {
        case '+':
            cout << num1 + num2;
            break;
		case '-':
            cout << num1 - num2;
            break;
		case '*':
            cout << num1 * num2;
            break;
		case '/':
            cout << num1 / num2;
            break;
		default:
            cout << "Error! operator is not correct";
            break;
    }

    return 0;
}