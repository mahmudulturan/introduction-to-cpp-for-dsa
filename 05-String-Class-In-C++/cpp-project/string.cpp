#include <bits/stdc++.h>
using namespace std;

int main()
{
    char s1[] = "Hello"; // c string

    string str1 = "Hello"; // c++ string
    string str2 = "World"; // c++ string

    cout << str1 << " " << str2 << endl; // Hello World
    str1 = "Hellaw";
    string str3 = str1 + " " + str2;
    cout << str3 << endl; // Hellaw World
    return 0;
}