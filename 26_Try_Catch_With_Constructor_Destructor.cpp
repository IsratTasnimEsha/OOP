//Bismillahir Rahmanir Rahim

#include<bits/stdc++.h>
using namespace std;

class Test
{
public:
    Test()
    {
        cout<<"Constructor Called"<<endl;
    }
    ~Test()
    {
        cout<<"Destructor Called"<<endl;
    }
};
int main()
{
    try
    {
        Test t;
        cout<<"Check"<<endl;
        throw 10;
    }
    catch(int i)
    {
        cout<<"Exception caught: "<<i<<endl;
    }
}