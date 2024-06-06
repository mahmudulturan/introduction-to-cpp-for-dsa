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
    // static array of objects
    Student arrOfStudents[5];
    
    // dynamic array of objects
    // Student *arrOfStudents = new Student[5];

    for (int i = 0; i < 5; i++)
    {
        getline(cin, arrOfStudents[i].name);
        cin >> arrOfStudents[i].age >> arrOfStudents[i].roll;
        cin.ignore();
    }

    for (int i = 0; i < 5; i++)
    {
        cout << arrOfStudents[i].name << " " << arrOfStudents[i].age << " " << arrOfStudents[i].roll << endl;
    }

    return 0;
}