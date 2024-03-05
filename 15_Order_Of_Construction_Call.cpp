// Bismillahir Rahmanir Rahim

// Order of construction call

#include <bits/stdc++.h>
using namespace std;

class A
{
public:
    A() { cout << "A "; }
};

class B : virtual public A
{
public:
    B() { cout << "B "; }
};

class C : public A
{
public:
    C() { cout << "C "; }
};

class D : public C, public B
{
public:
    D() { cout << "D "; }
};

int main()
{
    // D d1; //A C A B D (virtual kisu nai)
    /*
    normal niom->
    D te inorder B, C. B te age zabe, B te A ke inherit kora hoyeche to print(A)
    pore B te fire ashbe to print(B)
    C te zabe.
    C te A ke inherit kora hoyeche to print(A)
    pore C te fire ashbe to print(C)
    last e print(D)
    */

     D d2; //A A C B D (shudhu B e A ke virtual kore)
    /*
    virtual ze base class e hoyeche take call kore normal niom e colbe.
    B te A virtual ache to konodike na giye print(A) korbe.
    normal niom e C hobe
    B te A virtual ache r A agei printed, to shudhu print(B) korbe
    last e print(D)
     */

    //D d3; // A C B D (C, B e A ke virtual kore)
    /*
    B, C te A ke virtual kora to print(A)
    C te zabe, C te A virtual ache r A agei printed, to shudhu print(C) korbe
    B te zabe, B te A virtual ache r A agei printed, to shudhu print(B) korbe
    last e print(D)
    */
}