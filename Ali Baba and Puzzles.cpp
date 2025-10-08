#include <bits/stdc++.h>
using namespace std;

long long applyOp(long long x, long long y, char op)
{
    if (op == '+') return x + y;
    if (op == '-') return x - y;
    return x * y;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long a, b, c, d;
    if (!(cin >> a >> b >> c >> d)) return 0;

    vector<char> ops = {'+', '-', '*'};
    bool ok = false;

    for (char op1 : ops)
    {
        for (char op2 : ops)
        {
            if (op1 == op2) continue;
            long long val;
            if (op1 == '*')
            {

                long long t = applyOp(a, b, '*');
                val = applyOp(t, c, op2);
            }
            else if (op2 == '*')
            {
                long long t = applyOp(b, c, '*');
                val = applyOp(a, t, op1);
            }
            else
            {
                long long t =applyOp(a, b, op1);
                val = applyOp(t, c, op2);
            }

            if (val == d)
            {
                ok = true;
                break;
            }
        }
        if (ok) break;
    }

    cout << (ok ? "YES\n" : "NO\n");
    return 0;
}
