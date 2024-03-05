//Bismillahir Rahmanir Rahim

#include<bits/stdc++.h>
#include<typeinfo> //typeid er jonno
using namespace std;

class Base
{
    //base class e obosshoi virtual function thakte hobe (polymorphic na)
    virtual void f(){}
};
class Derived: public Base
{
};
int main()
{
    Base *bp, bObj;
    Derived *dp, dObj;
    
    bp=dynamic_cast<Base*>(&bObj);
    if(bp) cout<<"Base to Base Successful!"<<endl;
    else cout<<"Base to Base Unsuccessful :("<<endl;
    
    dp=dynamic_cast<Derived*>(&bObj);
    if(dp) cout<<"Base to Derived Successful!"<<endl;
    else cout<<"Base to Derived Unsuccessful :("<<endl;

    bp=&dObj;
    dp=dynamic_cast<Derived*>(bp);
    if(dp) cout<<"Base to Derived Successful cause bp actually points Derived!"<<endl;
    else cout<<"Base to Derived Unsuccessful :("<<endl;

    bp=&bObj;
    dp=dynamic_cast<Derived*>(bp);
    if(dp) cout<<"Base to Derived Successful cause bp actually points Base!"<<endl;
    else cout<<"Base to Derived Unsuccessful :("<<endl;

    dp=dynamic_cast<Derived*>(&dObj);
    if(dp) cout<<"Derived to Derived Successful!"<<endl;
    else cout<<"Derived to Derived Unsuccessful :("<<endl;

    bp=dynamic_cast<Base*>(&dObj);
    if(dp) cout<<"Derived to Base Successful!"<<endl;
    else cout<<"Derived to Base Unsuccessful :("<<endl;
}