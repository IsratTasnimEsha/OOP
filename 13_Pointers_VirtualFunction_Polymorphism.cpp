// Bismillahir Rahmanir Rahim

// Pointers, Virtual function, Polymorphism

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

    virtual int area()
    {
        return 0;
    }
};

class rectangle : public polygon
{
public:
    int r;
    int area()
    {
        return height * width;
    }
};

class triangle : public polygon
{
public:
    /*
    int area()
    {
        return (float)height*width/2;
    }
    */
};

int main()
{
    polygon poly;
    rectangle rect;
    triangle tri;
    polygon *ppoly;
/*
    ppoly = &poly;
    ppoly->setValues(4, 5);
    cout << "Area of polygon\t\t: " << ppoly->area() << endl;

    ppoly = &tri;
    ppoly->setValues(6, 5);
    cout << "Area of triangle\t: " << ppoly->area() << endl;
    // triangle e area function nai to polygon thekei call korbe
*/
    ppoly = &rect;
    ppoly->setValues(4, 5);
    //ppoly->r=8; //Can't
    cout << "Area of rectangle\t: " << ppoly->area() << endl;
    // polygon e area na thakle wrong dekhato. area virtual na korle 0 ashto karon otay return 0

    //Typecasting. No need of virtual function
    ppoly = &rect;
    ((rectangle*)ppoly)->setValues(5, 7);
    ((rectangle*)ppoly)->r=8;
    cout << "Area of rectangle\t: " << ((rectangle*)ppoly)->area() <<endl<<"r "<<((rectangle*)ppoly)->r<< endl;
}