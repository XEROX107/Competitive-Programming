#include <bits/stdc++.h>
using namespace std;

int main()
{
    int A, B;
    char S;
    cin >> A >> S >> B;

    bool correct = false;

    if (S == '<') correct = (A < B);
    else if (S == '>') correct = (A > B);
    else if (S == '=') correct = (A == B);

    if (correct) cout << "Right\n";
    else cout << "Wrong\n";

    return 0;
}
