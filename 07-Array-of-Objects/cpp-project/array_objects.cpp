#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    int age;
    int roll;
};

int main()
{
    Student arrOfStudents[5];
    for (int i = 0; i < 5; i++)
    {
        cin >> arrOfStudents[i].name >> arrOfStudents[i].age >> arrOfStudents[i].roll;
    }

    for (int i = 0; i < 5; i++)
    {
        cout << arrOfStudents[i].name << " " << arrOfStudents[i].age << " " << arrOfStudents[i].roll << endl;
    }

    return 0;
}