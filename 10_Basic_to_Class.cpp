//Bismillahir Rahmanir Rahim

#include <bits/stdc++.h>
using namespace std;

class Time
{
    int h, m;
public:
    Time(int tm)
    {
        cout<<"Constructor1"<<endl;
        h=tm/60;
        m=tm%60;
    }

    Time()
    {
        cout<<"Constructor2"<<endl;
    }

    void operator=(int tm)
    {
        cout<<"Operator="<<endl;
        h=tm/60;
        m=tm%60;
    }

    void Display()
    {
        cout<<"Hour= "<<h<<endl;
        cout<<"Minitue= "<<m<<endl;
    }
};
int main()
{
    //type converter

    //1.Baic type->Class type
    int tot_min=65;

    cout<<"t1"<<endl;
    Time t1=tot_min;
    t1.Display();

    int tot_min2=165;

    cout<<endl<<"t2"<<endl;
    Time t2;
    t2=tot_min2; //void operator= use na korle t2 er jonno 2 bar constructor call hoy. Constructor normally life e ekbar call howa ucit.
    t2.Display();
}