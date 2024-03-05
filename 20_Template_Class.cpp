// Bismillahir Rahmanir Rahim

#include <bits/stdc++.h>
using namespace std;

template <class myType1, class myType2, class myType3>
class MyPair
{
    myType1 a;
    myType2 b;

public:
    MyPair(myType1 i, myType2 j)
    {
        a = i;
        b = j;
    }
    myType3 getMax();
};

template <class myType1, class myType2, class myType3>
myType3 MyPair<myType1, myType2, myType3>::getMax()
{
    return a > b ? a : b;
}

int main()
{
    MyPair<float, int, float> mp(5.3, 5.6);
    cout << mp.getMax() << endl; // output: 5.3 because (int)5.6=5
}