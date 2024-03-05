//Bismillahir Rahmanir Rahim

#include<bits/stdc++.h>
#include<typeinfo> //typeid er jonno
using namespace std;

class Base
{
    //base class e obosshoi virtual function thakte hobe (polymorphic na)
    virtual void f(){}
};
class Derived1 : public Base
{
};
class Derived2 : public Base
{
};
void w(Base &obj)
{
    cout<<"Obj is pointing to an obj of type "<<typeid(obj).name()<<endl;
}
int main()
{
    //upcasting: derived to base
    //downcasting: base to derived
    Base baseObj, *basePt;
    Derived1 ob1;
    Derived2 ob2, ob3;
    basePt=&ob3;
    w(baseObj);
    w(ob1);
    w(ob2);
    if(typeid(ob1)==typeid(ob2)) cout<<"ob1 and ob2 are of same type"<<endl;
    else cout<<"ob1 and ob2 are of different type"<<endl;
    if(typeid(ob2)==typeid(ob3)) cout<<"ob1 and ob3 are of same type"<<endl;
    else cout<<"ob2 and ob3 are of different type"<<endl;

    cout<<typeid(basePt).name()<<endl;
    cout<<typeid(*basePt).name()<<endl;
}