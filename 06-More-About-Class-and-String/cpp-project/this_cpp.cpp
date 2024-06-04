#include <bits/stdc++.h>
using namespace std;

class Person
{
public:
    string name;
    int age;
    Person(string name, int age)
    {
        this->name = name;
        this->age = age;
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