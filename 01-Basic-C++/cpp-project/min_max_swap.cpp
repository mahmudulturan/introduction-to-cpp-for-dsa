#include <iostream>
#include <algorithm>
#include <utility>
using namespace std;
int main()
{
    int a, b, c, d, x, y;
    cin >> a >> b >> c >> d >> x >> y;
    int e = min(a, b);
    int f = max({a, b, c, d});
    swap(x, y);
    cout << e << endl;
    cout << d << endl;
    cout << x << " " << y << endl;
    return 0;
}