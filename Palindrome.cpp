#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s = "naman";
    int start = 0;
    int end = s.size() - 1;
    int flag = 0;
    while (start < end)
    {
        if (s[start] != s[end])
        {
            cout << "Not Equal";
            flag = 1;
        }
        start++;
        end--;
    }
    if (flag == 0)
    {
        cout << "Equal";
    }
}