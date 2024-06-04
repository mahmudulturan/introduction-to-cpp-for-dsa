#include <bits/stdc++.h>
using namespace std;

class Person
{
public:
    string name;
    int age;
    Person(string nm, int ag)
    {
        name = nm;
        age = ag;
    }

    void display()
    {
        cout << "name " << name << " " << "age " << age << endl;
    }
};

int main()
{
    Person p("Mahmudul Hassan", 21);
    p.display();

    return 0;
}