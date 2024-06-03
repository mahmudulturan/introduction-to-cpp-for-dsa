#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s = "hello";

    cout << "size - " << s.size() << endl; // get the size of the string

    cout << "max_size - " << s.max_size() << endl; // get the max size of the string

    cout << "capacity - " << s.capacity() << endl; // get the capacity of the string

    s.clear();
    cout << "clear - " << s.size() << endl; // clear the string

    cout << "empty true - " << s.empty() << endl; // check if the string is empty
    s = 's';
    cout << "empty false - " << s.empty() << endl; // check if the string is empty

    s.resize(5);
    cout << "after resize - " << s.size() << endl; // resize the string
    return 0;
}