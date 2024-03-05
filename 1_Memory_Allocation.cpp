// Bismillahir Rahmanir Rahim

#include <bits/stdc++.h>
using namespace std;

class A
{
    int a, b;

public:
    int p=12345;

    A(int x, int y);

    A() { cout << "default" << endl; }

    ~A() { cout << "dest" << endl; }
};
A::A(int xx, int yy)
{
    a = xx;
    b = yy;
    cout << a << " " << b << endl;
}
int main()
{
    A(7, 9);       // 7, 9     dest
    A a = A(2, 8); // 2, 8
    A b(4, 5);     // 4, 5
    A c(); //Not default cons. Not object maybe. Nothing
    //c.d; //wrong
    A d; //Default cons
    cout<<d.p<<endl;
}
// dest
// dest