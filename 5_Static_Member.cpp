// Bismillahir Rahmanir Rahim

#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    int n;
};

class StaticStudent
{
public:
    static int n;
};

int StaticStudent::n; // initialize to zero
// int StaticStudent::n = 9;

int main()
{
    Student s1, s2;
    s1.n = 5;
    cout << "Normal: " << s1.n << " ";
    s1.n = 10; // s1 change korsi s2 kisu hobena
    cout << s2.n << endl;

    StaticStudent Ss1, Ss2;
    cout << "Static: " << Ss1.n << " ";
    Ss1.n = 10; // Ss1 change korsi Ss2 o change hoise
    cout << Ss2.n << endl;
}