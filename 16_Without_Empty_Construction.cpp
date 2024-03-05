/// Bismillahir Rahmanir Rahim

#include <bits/stdc++.h>
using namespace std;

class E
{
    int e=6;
public:
    E()
    {
        //this->e = e;
        cout << "E: " << e << endl;
    }
};

class A: public E
{
    int a;

public:
    A(int a)
    {
        this->a = a;
        cout << "A: " << a << endl;
    }
};

class B : public A
{
    int b;

public:
    B(int a, int b) : A(a)
    {
        this->b = b;
        cout << "B: " << b << endl;
    }
};

class C : virtual public A
{
    int c;

public:
    C(int a, int c) : A(a)
    {
        this->c = c;
        cout << "C: " << c << endl;
    }
};

class D : public B, public C
{
    int d;

public:
    D(int a, int b, int c, int d) :  C(a, c), B(a, b), A(a=3)
    // A(a) virtual er jonno karon virtual korar por C te na giye A te age zabe
    {
        this->d = d;
        cout << "D: " << d << endl;
    }
};

int main()
{
    D dd(1, 2, 3, 4);
}