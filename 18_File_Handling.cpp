/// Bismillahir Rahmanir Rahim

#include <bits/stdc++.h>
using namespace std;

class X
{
    char name[20];
    int cost;

public:
    void file_write()
    {
        ofstream outf;
        outf.open("item.text"); //write on a file
        //outf.open("item.text", ios::app); //append on a file

        cout << "Enter Name-1: ";
        cin >> name;
        outf << name << endl;

        cout << "Enter Cost-1: ";
        cin >> cost;
        outf << cost << endl;

        cout << "Enter Name-2: ";
        cin >> name;
        outf << name << endl;

        cout << "Enter Cost-2: ";
        cin >> cost;
        outf << cost;

        // outf<<"Name: Asus Vivobook"<<endl<<"Cost: "<<69000<<endl;

        outf.close();
    }

    void file_read()
    {
        ifstream inf("item.text"); //read from a file
        int i=0;

        while (inf.eof() == 0)
        {
            i++;

            cout<<"Product "<<i<<endl;
            inf >> name;
            cout <<"Name: "<<name << endl;

            inf >> cost;
            cout <<"Cost: "<< cost << endl<<endl;
        }

        inf.close();
    }
};

int main()
{
    /// File Handling

    X obj1, obj2;
    obj1.file_write();
    obj2.file_read();
}