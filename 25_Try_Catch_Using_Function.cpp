//Bismillahir Rahmanir Rahim

#include<bits/stdc++.h>
using namespace std;

void func(int *ptr, int x) throw (int, int*, char const*)
{
    if(ptr==NULL) throw ptr;
    else if(x==0) throw x;
    else throw "nothing";
}
int main()
{
    //Exception Handling
    int n;
    int *pt=&n;

    try
    {
        //func(NULL, 0); //1st catch
        //func(pt, 0); //2nd catch
        func(pt, 5); //3rd catch

        //shobgula ekshathe run korle 1st catch hoye code sesh hoye zabe
    }
    catch(int *p)
    {
        cout<<"Pointer exception caught from func(): "<<p<<endl;
    }
    catch(int i)
    {
        cout<<"Integer exception caught from func(): "<<i<<endl;
    }
    catch(...)
    {
        cout<<"Exception caught from func(): void"<<endl;
    }
}