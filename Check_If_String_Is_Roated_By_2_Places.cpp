#include <bits/stdc++.h>
using namespace std;

// void rotateclockwise(string &clockwise)
// {
//     char c = clockwise[clockwise.size() - 1];
//     int index = clockwise.size() - 2;
//     while (index >= 0)
//     {
//         clockwise[index + 1] = clockwise[index];
//         index--;
//     }
//     clockwise[0] = c;
// }

void clockwisee(string &s)
{
    int n = s.size();
    char ch = s[n - 1];
    for (int i = n - 2; i >= 0; i--)
    {
        s[i + 1] = s[i];
    }
    s[0] = ch;
}

// void rotateanticlockwise(string &anticlockwise)
// {
//     char temp = anticlockwise[0];
//     int index = 1;
//     while (index < anticlockwise.size())
//     {
//         anticlockwise[index - 1] = anticlockwise[index];
//         index++;
//     }
//     anticlockwise[anticlockwise.size() - 1] = temp;
// }

void antinclockwisee(string &s)
{
    int n = s.size();
    char ch = s[0];
    for (int i = 1; i < n; i++)
    {
        s[i - 1] = s[i];
    }
    s[n - 1] = ch;
}

int main()
{
    string str1 = "amazon";
    string str2 = "azonam";

    string clockwise = str1;
    string anticlockwise = str1;

    clockwisee(clockwise);
    clockwisee(clockwise);
    if (clockwise == str2)
    {
        cout << "Equal";
    }
    else
    {
        cout << "Not Equal";
    }

    antinclockwisee(anticlockwise);
    antinclockwisee(anticlockwise);
    if (anticlockwise == str2)
    {
        cout << "True";
    }
    else
    {
        cout << "False";
    }
    return 0;
}