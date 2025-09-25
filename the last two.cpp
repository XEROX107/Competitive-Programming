#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long A, B, C, D;
    cin >> A >> B >> C >> D;

    long long result = (A % 100) * (B % 100) % 100;
    result = result * (C % 100) % 100;
    result = result * (D % 100) % 100;

    // print result with two digits (e.g., 05 instead of 5)
    if (result < 10) cout << 0 << result << "\n";
    else cout << result << "\n";

    return 0;
}
