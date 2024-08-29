#include <iostream>
#include <cmath>  // For mathematical functions like pow, sin, cos, tan, log
using namespace std;

int main() {
    int n;
    cout << "Welcome to the King of Calculator\n";
    cout << "Choose the type\n"
         << "1) Addition\n"
         << "2) Multiplication\n"
         << "3) Division\n"
         << "4) Percentage\n"
         << "5) Subtraction\n"
         << "6) Integral power of an integer\n"
         << "7) Modulus\n"
         << "8) GCD\n"
         << "9) Trigonometric functions\n"
         << "10) Log value\n"
         << "11) Matrix Addition\n"
         << "Choose option: ";
    cin >> n;

    switch (n) {
        case 1: {
            int a, b, c;
            cout << "Enter a, b values: ";
            cin >> a >> b;
            c = a + b;
            cout << c << endl;
            break;
        }
        case 2: {
            int a, b, c;
            cout << "Enter a, b values: ";
            cin >> a >> b;
            c = a * b;
            cout << c << endl;
            break;
        }
        case 3: {
            float a, b, c;
            cout << "Enter two values: ";
            cin >> a >> b;
            c = a / b;
            cout << c << endl;
            break;
        }
        case 4: {
            float a, b, c;
            cout << "Enter two values: ";
            cin >> a >> b;
            c = (a / b) * 100;
            cout << fixed << c << endl;
            break;
        }
        case 5: {
            int a, b, c;
            cout << "Enter a, b values: ";
            cin >> a >> b;
            c = a - b;
            cout << c << endl;
            break;
        }
        case 6: {
            double base, exp, result;
            cout << "Enter base, exp values: ";
            cin >> base >> exp;
            result = pow(base, exp);
            cout << base << "^" << exp << " = " << fixed << result << endl;
            break;
        }
        case 7: {
            int a, b, c;
            cout << "Enter a, b values: ";
            cin >> a >> b;
            c = a % b;
            cout << c << endl;
            break;
        }
        case 8: {
            int a, b, i, gcd;
            cout << "Enter a, b values: ";
            cin >> a >> b;
            for (i = 1; i <= a && i <= b; i++) {
                if (a % i == 0 && b % i == 0)
                    gcd = i;
            }
            cout << gcd << endl;
            break;
        }
        case 9: {
            double x, result;
            int n1;
            cout << "Enter x value: ";
            cin >> x;
            cout << "Choose option \n1) sin function \n2) cos function \n3) tan function: ";
            cin >> n1;
            switch (n1) {
                case 1: {
                    result = sin(x);
                    cout << "sin(" << x << ") = " << result << endl;
                    break;
                }
                case 2: {
                    result = cos(x);
                    cout << "cos(" << x << ") = " << result << endl;
                    break;
                }
                case 3: {
                    result = tan(x);
                    cout << "tan(" << x << ") = " << result << endl;
                    break;
                }
            }
            break;
        }
        case 10: {
            double x, result;
            cout << "Enter x value: ";
            cin >> x;
            result = log(x);
            cout << "log(" << x << ") = " << result << endl;
            break;
        }
        case 11: {
            int m, n;
            cout << "Enter the limits: ";
            cin >> m >> n;
            int first[m][n], second[m][n], sum[m][n];
            cout << "Enter the elements of the first matrix:\n";
            for (int c = 0; c < m; c++)
                for (int d = 0; d < n; d++)
                    cin >> first[c][d];

            cout << "Enter the elements of the second matrix:\n";
            for (int c = 0; c < m; c++)
                for (int d = 0; d < n; d++)
                    cin >> second[c][d];

            cout << "Sum of the entered matrices:\n";
            for (int c = 0; c < m; c++) {
                for (int d = 0; d < n; d++) {
                    sum[c][d] = first[c][d] + second[c][d];
                    cout << sum[c][d] << "\t";
                }
                cout << endl;
            }
            break;
        }
        default:
            cout << "Invalid option" << endl;
    }
    return 0;
}
