#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s = "hello";

    for (int i = 0; i < s.size(); i++) // normal for loop
    {
        cout << s[i] << endl;
    }
    cout << endl;
    for (char c : s) // range based for loop
    {
        cout << c << endl;
    }
    return 0;
}