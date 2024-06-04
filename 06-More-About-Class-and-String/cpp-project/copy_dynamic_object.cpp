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
    Person *Mahmudul = new Person("Mahmudul Hassan", 21);
    Person *Rifat = new Person("Rifat Hassan", 30);

    *Mahmudul = *Rifat; // copy dynamic object
    delete Rifat;       // delete dynamic object

    cout << "name " << (*Mahmudul).name << " " << "age " << (*Mahmudul).age
         << endl;

    return 0;
}