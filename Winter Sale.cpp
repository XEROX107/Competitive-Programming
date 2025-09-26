#include <bits/stdc++.h>
using namespace std;

int main()
{
    double X, P;
    cin >> X >> P;

    double original = P / (1 - (X / 100.0));

    cout << fixed << setprecision(2) << original << endl;

    return 0;
}
