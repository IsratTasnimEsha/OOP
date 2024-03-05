// Bismillahir Rahmanir Rahim

#include <bits/stdc++.h>
#include <typeinfo> //typeid er jonno
using namespace std;

class Base
{
    // base class e obosshoi virtual function thakte hobe (polymorphic na)
    virtual void f() {}
};
class Derived : public Base
{
};
int main()
{
    Base *bp, bObj;
    Derived *dp, dObj;

    bp = &dObj;

    cout<<typeid(bp).name()<<endl;
    cout<<typeid(*bp).name()<<endl;

    if (typeid(*bp) == typeid(dObj))
    {
        dp = (Derived *)bp;
        cout << "Base to Derived Successful cause bp actually points Derived!" << endl;
    }
    else
        cout << "Base to Derived Unsuccessful :(" << endl;

    bp = &bObj;
    if (typeid(*bp) == typeid(Derived))
    {
        dp = (Derived *)bp;
        cout << "Base to Derived Successful cause bp actually points Base!" << endl;
    }
    else
        cout << "Base to Derived Unsuccessful :(" << endl;
}