#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s = "hello";

    s += " "; // append another string.

    s.append("world"); // append another string.
    cout << s << endl;

    s.push_back('!'); // add character to the last of the string.
    cout << s << endl;

    s.pop_back(); // remove the last character of the string
    cout << s << endl;

    s = "Programming"; // assign string.
    cout << s << endl;

    s.assign("Programming Shikhi"); // assign string.
    cout << s << endl;

    s.erase(4, 2); // erase characters from the string.
    cout << s << endl;

    s.replace(2, 3, "123"); // replace characters from the string.
    cout << s << endl;

    s.insert(10, "Shikhi "); // insert characters from the string.
    cout << s << endl;

    return 0;
}