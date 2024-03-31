#include <iostream>
using namespace std;

int main() {
    int num1, num2, operation;
    string equation = "";
    double answer;
    cout << "Enter the first number" << endl;
    cin >> num1;
    cout << "Choose operation\n1 -> +\n2 -> -\n3 -> /\n4 -> *" << endl;
    cin >> operation;
    cout << "Enter second number" << endl;
    cin >> num2;
    
    switch (operation)    {
        case 1:
            answer = (double) (num1 + num2);
            //equation = num1 + " + " + num2;
            break;
        case 2:
            answer = (double) (num1 - num2);
            //equation = num1 + " - " + num2;
            break;
        case 3:
            answer = num1 / num2;
            equation = num1 + " / " + num2;
            break;
        case 4:
            answer = num1 * num2;
            equation = num1 + " * " + num2;
            break;
    }
    
    cout << answer;

    return 0;
}
