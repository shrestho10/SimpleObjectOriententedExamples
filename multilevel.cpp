#include<iostream>
using namespace std;
class A
{
public:
    void print()
    {
        cout<<"hello";
    }
};
 class B : public A //public class A
{
public:
    void print1()
    {
        cout<<"\nwelcome";
    }

};
class C: public B
{

};
int main()
{
        C   q;
    q.print();
    q.print1();
}

