#include <iostream>
using namespace std;

int main()
{
    // static variable declare
    int a = 10;
    cout << a << endl;
    // dynamic variable declare
    int *b = new int;
    *b = 20;
    cout << *b << endl;
    return 0;
}