#include <bits/stdc++.h>
using namespace std;

namespace a
{
    int x = 10;
    int y = 64;
}

namespace b
{
    int x = 20;
    int y = 90;
}

using namespace b;
int main()
{
    cout << a::x << endl;
    cout << a::y << endl;
    cout << x << endl;
    cout << y << endl;
    return 0;
}