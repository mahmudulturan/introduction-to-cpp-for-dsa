#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        string s, x;
        cin >> s >> x;

        for (int j = 0; j < s.size(); j++)
        {
            int indx = s.find(x);

            if (indx != -1)
            {
                s.replace(indx, x.size(), "#");
            }
        }

        cout << s << endl;
    }

    return 0;
}