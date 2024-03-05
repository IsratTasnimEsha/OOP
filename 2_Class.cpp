// Bismillahir Rahmanir Rahim

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define dl double
#define st string

class Student_Info
{
    // if we don't write public or private, program will consider data as private
    st mobie;

public:
    ll roll;
    st name;

    void set_cgpa(dl);

    // function in class
    void get_cgpa()
    {
        cout << "CGPA: " << cgpa << endl;
    }

private:
    dl cgpa;
};

// function out of class
void Student_Info ::set_cgpa(dl cg)
{
    cgpa = cg;
}

int main()
{
    Student_Info s;

    s.roll = 2001;
    // s.cgpa=3.75; #compiler error, because, cgpa is a private element

    cout << "Roll: " << s.roll << endl;

    s.set_cgpa(3.75);
    s.get_cgpa();
}