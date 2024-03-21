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
    Student()
    {

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
    // ~Student()
    // {
    //     cout<<"Called ";
    //     print_information();
    // }
    void print_information()
    {
        cout<<"Student Name: "<<name<<" "<<"Student ID: "<<std_id<<" Fathers Name: "<<fathers_name<<" Mothers Name: "<<mothers_name<<"\n";
    }
};

int main()
{
    Student s("Ibrahim", 521, 30, "Abdul Aziz", "Halima Begam");
    Student s2("Salman Farsi", 4185, 18);
    Student s3;
    s.print_information();
    s2.print_information();

    return 0;
}
