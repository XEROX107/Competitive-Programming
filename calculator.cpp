#include <iostream>
using namespace std;

int main()
{
    int A, B;
    char S;   // operator (+, -, *, /)
    cin >> A >> S >> B;

    if (S == '+')
        cout << A + B << endl;
    else if (S == '-')
        cout << A - B << endl;
    else if (S == '*')
        cout << A * B << endl;
    else if (S == '/')
        cout << A / B << endl;  // integer division

    return 0;
}
