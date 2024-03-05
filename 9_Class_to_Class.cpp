// Bismillahir Rahmanir Rahim

#include <bits/stdc++.h>
using namespace std;

class A
{
    int a;
public:
    int setA(int i)
    {
        a=i;
        return a;
    }
    int showA()
    {
        return a;
    }
};

class B
{
    int b;
public:
    void operator=(A aa)
    {
        b=aa.showA();
    }

    void display()
    {
        cout<<b<<endl;
    }
};

int main()
{
    A aa;
    aa.setA(6);
    B bb;
    bb=aa;
    bb.display();
}