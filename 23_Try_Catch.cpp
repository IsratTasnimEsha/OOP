//Bismillahir Rahmanir Rahim

#include<bits/stdc++.h>
using namespace std;

int main()
{
    //Exception Handling

    int x=-1;
    cout<<"Before try"<<endl;
    try
    {
        cout<<"Inside try"<<endl;
        if(x<0)
        {
            throw x;
            cout<<"After throw (Never executed)"<<endl;
        }
        cout<<"After throw (Never executed)"<<endl;
    }
    catch(int i)
    {
        cout<<"Exception caught: "<<i<<endl;
    }
    cout<<"After catch"<<endl;
}