// Bismillahir Rahmanir Rahim

#include <bits/stdc++.h>
using namespace std;

#define ll long long

class Distance
{
    int feet, inch;

public:
    Distance(int f, int i)
    {
        feet = f;
        inch = i;
    }

    Distance()
    {
    }

    void displayDistance()
    {
        cout << "F: " << feet << "    I: " << inch << endl;
    }

    Distance operator++()
    {
        Distance p;
        p.feet = ++feet;
        p.inch = ++inch;
        return p;
    }

    Distance operator++(int)
    {
        Distance p;
        p.feet = feet++;
        p.inch = inch++;
        return p;
    }

    Distance operator+(Distance s)
    {
        Distance p;
        p.feet = feet + s.feet;
        p.inch = inch + s.inch;
        return p;
    }

    void operator<<(int p)
    {
        feet<<p;
        inch<<p;
    }
};

int main()
{
    Distance D1(11, 10), D2(-5, 11);
    Distance D4;

    //D4 = D1++;
    //D1 .displayDistance();
    //D4.displayDistance();
    D4<<2;
    D4.displayDistance();

    // D2++;
    // D2.displayDistance();

    // Distance D3;
    // D3=D1+D2;
    // D3.displayDistance();
}