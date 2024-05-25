#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    int id;
    char name[101];
    char section;
    double totalMarks;
    Student(int id, char name[], char section, double totalMarks)
    {
        this->id = id;
        strcpy(this->name, name);
        this->section = section;
        this->totalMarks = totalMarks;
    }
};

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int tmpId;
        char tmpName[101];
        char tmpSection;
        double tmpTotalMarks;
        cin >> tmpId >> tmpName >> tmpSection >> tmpTotalMarks;
        Student first(tmpId, tmpName, tmpSection, tmpTotalMarks);
        cin >> tmpId >> tmpName >> tmpSection >> tmpTotalMarks;
        Student second(tmpId, tmpName, tmpSection, tmpTotalMarks);
        cin >> tmpId >> tmpName >> tmpSection >> tmpTotalMarks;
        Student third(tmpId, tmpName, tmpSection, tmpTotalMarks);


        if (first.totalMarks > second.totalMarks && first.totalMarks > third.totalMarks)
        {
            cout << first.id << " " << first.name << " " << first.section << " " << first.totalMarks << endl;
        }
        else if (second.totalMarks > first.totalMarks && second.totalMarks > third.totalMarks)
        {
            cout << second.id << " " << second.name << " " << second.section << " " << second.totalMarks << endl;
        }
        else if (third.totalMarks > first.totalMarks && third.totalMarks > second.totalMarks)
        {
            cout << third.id << " " << third.name << " " << third.section << " " << third.totalMarks << endl;
        }
        else if (first.totalMarks == second.totalMarks == third.totalMarks)
        {
            cout << first.id << " " << first.name << " " << first.section << " " << first.totalMarks << endl;
        }
        else if (first.totalMarks == second.totalMarks)
        {
            cout << first.id << " " << first.name << " " << first.section << " " << first.totalMarks << endl;
        }
        else if (first.totalMarks == third.totalMarks)
        {
            cout << first.id << " " << first.name << " " << first.section << " " << first.totalMarks << endl;
        }
        else if (second.totalMarks == third.totalMarks)
        {
            cout << second.id << " " << second.name << " " << second.section << " " << second.totalMarks << endl;
        }
    }

    return 0;
}