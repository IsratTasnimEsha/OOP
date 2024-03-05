#include <bits/stdc++.h>
#include <fstream>
using namespace std;

int main()
{
    ofstream outf;
    outf.open("item1.txt");
    outf<<10<<" "<<20<<endl<<30<<" "<<40<<endl<<50<<" "<<60<<endl;
    outf.close();

    ifstream inf;
    inf.open("item1.txt");
    outf.open("item2.txt");
    int a, b;
    while(inf>>a>>b)
    {
        int s=a+b;
        outf<<s<<endl;
    }
    inf.close();
    outf.close();
    
    inf.open("item2.txt");
    int st;
    while(inf>>st)
        cout<<st<<endl;
    inf.close();
}