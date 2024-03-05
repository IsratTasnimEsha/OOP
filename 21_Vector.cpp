// Bismillahir Rahmanir Rahim

#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector<int> vec;

    for (int i = 0; i < 5; i++)
        vec.push_back(i + 1);

    for (int i = 0; i < vec.size(); i++)
        cout << vec[i] << endl;
    
    for (auto i: vec)
        cout << i << endl;
}