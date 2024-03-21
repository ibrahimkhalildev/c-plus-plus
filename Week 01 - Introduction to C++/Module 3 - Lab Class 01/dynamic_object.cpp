#include <bits/stdc++.h>

using namespace std;

class student
{
public:
    string name;
    int std_id;
    int age;
    string father_name;
    string mother_name;

    student(string name,int std_id, int age)
    {
        this->name = name;
        this->std_id = std_id;
        this-> age = age;
    }
    void print_student_information()
    {
        cout << "Student Name: " << name << " "
             << "Student ID: " << std_id << " Age:"
             << " " << age << " Father Name: " << father_name << " Mother Name: " << mother_name << endl;
    }
    void setInformation(string s, int id, int ag)
    {
        name = s;
        std_id = id;
        age = ag;
    }
};





int main()
{
    student *s = new student("Salam", 10, 58);
    s->print_student_information();
    (*s).print_student_information();

    return 0;
}
