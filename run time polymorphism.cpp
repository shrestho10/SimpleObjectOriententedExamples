#include<iostream>
using namespace std;
class a
{
public:
    void print()
    {
        cout<<"AB";
    }
};
class b
{ public:
    void print()
    {
        cout<<"cd";
    }
};
int main()
{ int n;
cin>>n;
if(n==1)
{


    a r;
    r.print();
}
if(n==2)
{
    b c;
    c.print();
}
}
