#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s = "hello";
    string::iterator it; // string iterator
    for(it = s.begin(); it < s.end(); it++){
        cout << *it << endl; // access each character of the string
    }

    cout << *s.begin() << endl; // access the first character of the string
    cout << *(s.end() - 1) << endl; // access the last character of the string


    return 0;
}