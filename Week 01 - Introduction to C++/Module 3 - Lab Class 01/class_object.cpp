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

    void print_student_information()
    {
        cout << "Name: " << name << " "
             << "Student ID: " << std_id << " Age:"
             << " " << age << " Father Name: " << father_name << " Mother Name: " << mother_name << endl;
    }
};

class Rectangle
{
public:
    int width, height;
    student s;

    // Area
    int calculate_area()
    {
        return height * width;
    }
    // perimeter
    int calculate_perimeter()
    {
        return 2 * (height + width);
    }
};

class Person
{   
    public:
    string name;
    Person *father, *mother;
    void print_person_info()
    {
        cout<<"Name: "<<name<<"\n";
        cout<<"Fathers name: "<<father->name<<"\n";
        cout<<"Mothers name: "<<mother->name<<"\n";
    }
};

int main()
{
    Person p;
    p.father = new Person;
    p.mother = new Person;
    p.name = "A";
    p.father->name = "B";
    p.mother->name = "C";
    p.print_person_info();
    // Rectangle r1;
    // r1.height = 4;
    // r1.width = 5;
    // cout<<r1.calculate_area()<<"\n";
    // cout<<r1.calculate_perimeter()<<"\n";
    // r1.s.name = "Ibrahim Khalil";
   
    // r1.s.print_student_information();

    // Rectangle r2;
    // r2.width = 5;
    // r2.height = 5;
    // cout<<r2.calculate_area()<<"\n";
    // cout<<r2.calculate_perimeter()<<"\n";

    // student s;
    // s.name = "Ibrahim Khalil";
    // s.std_id = 192965;
    // s.age = 30;
    // s.father_name = "Abdul Aziz";
    // s.mother_name = "Halima Begam";

    // student s2;
    // s2.name = "Yousuf";
    // s2.std_id = 447;
    // s2.age = 30;
    // s2.father_name = "Akib";
    // s2.mother_name = "Rakiba";

    // s.print_student_information();
    // s2.print_student_information();

    return 0;
}
