#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s = "hello";

    cout << s[0] << endl; // access the ith index of the string.
    
    cout << s.at(0) << endl; // access the ith index of the string using at.
    
    cout << s.back() << endl; // access the last index of the string.

    cout << s.front() << endl; // access the first index of the string.

    return 0;
}