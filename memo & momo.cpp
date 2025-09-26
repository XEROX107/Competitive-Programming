#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long a, b, k;
    cin >> a >> b >> k;

    bool memo = (a % k == 0);
    bool momo = (b % k == 0);

    if (memo && momo) cout << "Both\n";
    else if (memo) cout << "Memo\n";
    else if (momo) cout << "Momo\n";
    else cout << "No One\n";

    return 0;
}
