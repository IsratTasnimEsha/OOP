/// Bismillahir Rahmanir Rahim

#include <bits/stdc++.h>
using namespace std;

template <class myType1, class myType2>

myType2 getMax(myType1 a, myType2 b)
{
    return (a > b) ? a : b;
}

int main()
{
    // Template Function
    
    cout << getMax<int, int>(3, 3.6) << endl; // 2 type ke i int dhore nebe
    cout << getMax('A', 3.6) << endl; // kichu bola lagbena. computer tomar ceye valo bujhe
}