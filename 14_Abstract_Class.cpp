/// Bismillahir Rahmanir Rahim

// Abstract Class

#include <bits/stdc++.h>
using namespace std;

class polygon
{
protected:
    int height, width;

public:
    void setValues(int a, int b)
    {
        height = a;
        width = b;
    }

    virtual int area() = 0; // pure virtual function
};

class rectangle : public polygon
{
public:
    int area()
    {
        return height * width;
    }
};

class triangle : public polygon
{
public:
    int area()
    {
        return (float)height * width / 2;
    }
};

int main()
{
    // polygon poly; //pure virtual function thakle object create kora zayna. pointer create kora zay
    polygon *ppoly;

    ppoly = new rectangle;
    ppoly->setValues(4, 5);
    cout << "Area of rectangle\t: " << ppoly->area() << endl;
    delete (ppoly);

    ppoly = new triangle;
    // rectangle er address hariye geche r memory leak hoyeche. to age rectangle er address delete korte hobe
    ppoly->setValues(6, 5);
    cout << "Area of triangle\t: " << ppoly->area() << endl;
    // ebar shudhushudhu polygon er area ke call korle wrong khabe.
    // to pure virtual function ta shob derived class e obosshoi define korte hobe.
}