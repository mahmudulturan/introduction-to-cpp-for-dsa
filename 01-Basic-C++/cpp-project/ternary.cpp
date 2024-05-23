#include <iostream>
using namespace std;
int main()
{
    int a = 10;

    // normal if else
    if (a == 10)
    {
        cout << "a is 10\n";
    }
    else
    {
        cout << "a is not 10\n";
    }

    // ternary
    (a == 10) ? cout << "a is 10 ternary\n" : cout << "a is not 10 ternary\n";
    return 0;
}