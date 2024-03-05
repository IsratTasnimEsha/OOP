//Bismillahir Rahmanir Rahim

#include <bits/stdc++.h>
using namespace std;

class Student
{
    int id;
public:
    void setID(int i)
    {
        id=i;
    }

    void showID()
    {
        cout<<id<<endl;
    }
};

class test: public Student //id, setID, showID shobkichur jonno zayga nebe. but id ke direct access korte parbena.
{
protected:
    int sub1, sub2;
public:
    void setMarks(int i, int j)
    {
        sub1=i;
        sub2=j;
    }

    void showMarks()
    {
        cout<<"Sub1= "<<sub1<<endl<<"Sub2= "<<sub2<<endl;
    }
};

class Result: public test
{
    int total;
public:
    void showTotal()
    {
        cout<<"Total: "<<sub1+sub2<<endl;
    }
};

int main()
{
    //Inheritance
    Result t1;
    t1.setID(1);
    t1.showID();

    t1.setMarks(23, 57);
    t1.showMarks();

    t1.showTotal();
}