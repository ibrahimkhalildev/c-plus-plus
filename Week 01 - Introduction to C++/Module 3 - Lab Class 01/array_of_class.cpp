#include <bits/stdc++.h>

using namespace std;

class Student
{
public:
    string name;
    int std_id;
    int age;
    string fathers_name;
    string mothers_name;
    // Constructor
    Student(){

    };
    // Constructor
    Student(string name, int id, int ag, string f_name, string m_name)
    {
        this->name = name;
        std_id = id;
        this->age = age;
        fathers_name = f_name;
        mothers_name = m_name;
    };
    // Constructor Overloading
    Student(string ss, int id, int ag)
    {
        name = ss;
        std_id = id;
        age = ag;
    };

    // }
    void print_information()
    {
        cout << "Student Name: " << name << " "
             << "Student ID: " << std_id << " Fathers Name: " << fathers_name << " Mothers Name: " << mothers_name << "\n";
    }
};

int main()
{
    vector<Student> a;
    for (int i = 0; i < 10; i++)
    {
        a.push_back(Student("A", 20 - i, 20));
    }
    for (int i = 0; i < 10; i++)
    {
        a[i].print_information();
    }

    return 0;
}
