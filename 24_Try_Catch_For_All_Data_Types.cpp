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
    }
    catch(...) //shobkichu dhore felbe
    {
        cout<<"Exception caught"<<endl;
    }
    cout<<"After catch"<<endl;
}