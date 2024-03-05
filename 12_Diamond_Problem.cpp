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
        cout<<"ID\t=  "<<id<<endl;
    }
};

class test: virtual public Student
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
        cout<<"Sub1\t=  "<<sub1<<endl<<"Sub2\t=  "<<sub2<<endl;
    }
};

class sports: virtual public Student
{
protected:
    int score;
public:
    void setScore(int s)
    {
        score=s;
    }

    void displayScore()
    {
        cout<<"Sport\t=  "<<score<<endl;
    }
};

class Result: public test, public sports
{
    int total;
public:
    void showTotal()
    {
        cout<<"Total\t:  "<<sub1+sub2+score<<endl;
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

    t1.setScore(90);
    t1.displayScore();

    t1.showTotal();
}