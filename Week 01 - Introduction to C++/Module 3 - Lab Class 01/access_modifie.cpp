#include <bits/stdc++.h>

using namespace std;
class student
{
private:
    string name;
    int std_id;
    int age;
    string father_name;
    string mother_name;

public:
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
        cout << "Name: " << name << "\n";
        cout << "Fathers name: " << father->name << "\n";
        cout << "Mothers name: " << mother->name << "\n";
    }
};

class User
{
protected:
    string name;
    int age;
};
class Admin : User
{
private:
    string designation;

public:
    void set(string s, int ag, string dg)
    {
        name = s;
        age = ag;
        designation = dg;
    }
    void print()
    {
        cout << name << "\n";
        cout << age << "\n";
        cout << designation << "\n";
    }
};

int main()
{

    Admin ad;
    ad.set("A", 20, "D");
    ad.print();

    return 0;
}
