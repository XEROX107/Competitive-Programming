#include <bits/stdc++.h>
using namespace std;

int main()
{
    int A, B, C;
    cin >> A >> B >> C;

    vector<int> original = {A, B, C};
    vector<int> sorted = original;

    sort(sorted.begin(), sorted.end());

    // Print sorted numbers
    for (int x : sorted)
        cout << x << "\n";

    cout << "\n";

    // Print original numbers
    for (int x : original)
        cout << x << "\n";

    return 0;
}
