#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string nm;
    int cls;
    char s;
    int id;
    int math_marks;
    int eng_marks;
};

bool cmp(Student s1, Student s2)
{
    if (s1.eng_marks != s2.eng_marks)
    {
        return s1.eng_marks > s2.eng_marks;
    }
    else
    {
        if (s1.math_marks != s2.math_marks)
        {
            return s1.math_marks > s2.math_marks;
        }
        else
        {
            return s1.id < s2.id;
        }
    }
}

int main()
{
    int t;
    cin >> t;
    Student s[t];
    
    for (int i = 0; i < t; i++)
    {
        cin >> s[i].nm >> s[i].cls >> s[i].s >> s[i].id >> s[i].math_marks >> s[i].eng_marks;
    }

    sort(s, s + t, cmp);

    for (int i = 0; i < t; i++)
    {
        cout << s[i].nm << " " << s[i].cls << " " << s[i].s << " " << s[i].id << " " << s[i].math_marks << " " << s[i].eng_marks << endl;
    }

    return 0;
}