#include <iostream>
using namespace std;
class XYZ
{
private:
    int num = 11;

public:
    /* This statement would make class ABC
     * a friend class of XYZ, this means that
     * ABC can access the private and protected
     * members of XYZ class.
     */
    friend class ABC;
};
class ABC
{
public:
    void disp(XYZ abc)
    {
        cout<<abc.num<<endl;
    }
};
int main()
{
    ABC obj;
    XYZ obj2;
    obj.disp(obj2);
}