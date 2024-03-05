#include <bits/stdc++.h>
using namespace std;

int main()
{
    string ip_address = "1.1.1.1";
    string defangedIp;

    for (char c : ip_address)
    {
        if (c == '.')
        {
            defangedIp += "[.]";
        }
        else
        {
            defangedIp += c;
        }
    }
    cout << defangedIp;
}