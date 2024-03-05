#include <bits/stdc++.h>
using namespace std;

class Student
{
    int roll;
    string name;

public:
    Student(int r, string n) // Constructor and class name are same. no return tyoe
    {
        roll = r;
        name = n;
        cout << "Roll, Name Parameter" << endl;
    }
    // constructor public e hote hobe

    Student(string n, int r) // constructor overload
    {
        name = n;
        roll = r;
        cout << "Name, Roll Parameter" << endl;
    }

    Student()
    {
        cout << "Default Construcor Called." << endl;
    }

    /*
        Student()
        {
            //2 ta i same constructor, same argument howay error hobe
        }
    */

    Student(Student &x)
    {
        // ei constructor ta dewar kono dorkar nai. copy constructor kivabe kaj kore(manually) eta ekhane dekhano hoyeche shudhu.
        // eta automatic i hy. dorkar nai
        roll = x.roll;
        name = x.name;
        cout << "Copy Constructor" << endl;
    }

    void view()
    {
        cout << "Roll: " << roll << endl
             << "Name: " << name << endl;
    }
};

int main()
{
    cout << "s1" << endl;

    Student s1(90, "abcd"); // parameterized construcor // constructor nije theke call hy
    // here argument sequence of constructor should be avide by
    s1.view();

    cout << endl;

    cout << "s2" << endl;

    Student s2("rfrff", 83); // for initiatialization eta shohoj
    s2.view();

    cout << endl;

    cout << "s3" << endl;

    //**constructor overload same name argument sequence different

    Student s3; // Default Construcor
    // Student constructor na thakleo ota Default Construcor. otar vetor kono parameter nai ba cout o nai, tai kichu print hyna
    s3.view(); // Garbage value ashbe

    cout << endl;

    cout << "s4" << endl;

    Student s4; /* noramlly default constructor dhore ney.
kintu ami zodi nije constructor set kore dei, compiler r default er dayitto nebena. tokhon error dekhabe */

    cout << "s5" << endl;

    Student s5 = s1; // copy construcor

    cout << "s6" << endl;

    Student s6(s2); // copy constructor

    cout << endl;

    cout << "s7" << endl;

    Student s7; // eta default ta dhore ney
    s7 = s1;    // assigning. not copy constructor
}