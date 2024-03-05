#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s = "Ankit Mishra";
    int size = 0;
    int idx = 0;
    while (s[idx] != '\0')
    {
        size++;
        idx++;
    }
    cout << size;
}