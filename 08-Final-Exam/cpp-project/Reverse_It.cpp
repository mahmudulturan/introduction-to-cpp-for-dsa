#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string nm;
    int cls;
    char s;
    int id;
};

int main()
{
    int t;
    cin >> t;
    Student s[t];
    for (int i = 0; i < t; i++)
    {
        cin >> s[i].nm >> s[i].cls >> s[i].s >> s[i].id;
    };

    for (int i = 0; i < t / 2; i++)
    {
        char tmp = s[i].s;
        s[i].s = s[t - i - 1].s;
        s[t - i - 1].s = tmp;
    };

    for (int i = 0; i < t; i++)
    {
        cout << s[i].nm << " " << s[i].cls << " " << s[i].s << " " << s[i].id << endl;
    };

    return 0;
}