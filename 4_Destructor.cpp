// Bismillahir Rahmanir Rahim

#include <bits/stdc++.h>
using namespace std;

class Student
{
    int roll;
    string name;

public:
    Student() // Constructor and class name are same. no return tyoe
    {
        cout << "Default" << endl;
    }

    ~Student() // Desstructor and class name are same(with ~). no return type, no parameter, so no ekadhik function
    {
        // scope er baire gele destuctor call hy. dhongsho kore
        cout << "Destructor" << endl;
    }
    // constructor public e hote hobe
};

int main()
{
    cout << "s1" << endl;
    Student s1;
    cout << endl;

    {
        cout << "s2" << endl;
        Student s2;
        cout << endl;
    }

    cout << "s3" << endl;
    Student s3;
    cout << endl;
}

/*
s1
Default
// here endl because of line 32
s2
Default
// here endl because of line 34
Destructor //s2 er destructor. scope er baire 35 line er bracket er jonno. endl scope er vetore chilo(line 34) tai ekhane endl hobena
s3
Default
// here endl because of line 39
Destructor //s1 er destructor. scope er baire 40 line er bracket er jonno. endl scope er vetore chilo(line 34) tai ekhane endl hobena
Destructor //s3 er destructor. scope er baire 40 line er bracket er jonno. endl scope er vetore chilo(line 39) tai ekhane endl hobena
*/