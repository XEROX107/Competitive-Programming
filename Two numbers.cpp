#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double A, B;
    cin >> A >> B;

    double result = A / B;

    cout << "floor " << A << " / " << B << " = " << (long long)floor(result) << endl;
    cout << "ceil "  << A << " / " << B << " = " << (long long)ceil(result)  << endl;
    cout << "round " << A << " / " << B << " = " << (long long)round(result) << endl;

    return 0;
}
