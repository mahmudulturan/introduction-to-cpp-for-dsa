#include <bits/stdc++.h>
using namespace std;

int main()
{
    char arr[100010];
    while (cin.getline(arr, 100010))
    {
        sort(arr, arr + strlen(arr));
        for (int i = 0; arr[i]; ++i)
        {
            if (arr[i] == ' ')
            {
                continue;
            }
            cout << arr[i];
        }
        cout << endl;
    }
    return 0;
}