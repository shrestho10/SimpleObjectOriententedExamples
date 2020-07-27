#include<iostream>
using namespace std;
class A
{
public:
    void printa()
    {
        cout<<"hello A";
    }
};
 class B :public A
{
public:
    void printb()
    {
        cout<<"\nhello B";
    }

};
class K
{
public:
    void printk()
    {
        cout<<"\nhello K";
    }

};
class C: public K
{ public:
void printc()
    {
        cout<<"\nhello C";
    }
};
class D:public B,public C{
};
int main()
{
        D   q;
    q.printa();
    q.printb();
    q.printc();
    q.printk();
}



