#include <bits/stdc++.h>
using namespace std;

int main()
{
    string N;
    cin >> N;

    if (N.find('.') != string::npos)
    {
        string intPart = N.substr(0, N.find('.'));
        string decPart = N.substr(N.find('.') + 1);

        string temp = decPart;
        while (!temp.empty() && temp.back() == '0')
        {
            temp.pop_back();
        }

        if (temp.empty())
        {
            cout << "int " << intPart << endl;
        }
        else
        {
            cout << "float " << intPart << " 0." << decPart << endl;
        }
    }
    else
    {
        cout << "int " << N << endl;
    }

    return 0;
}
//this code own by sakib
