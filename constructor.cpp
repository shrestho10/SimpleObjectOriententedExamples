#include<iostream>
using namespace std;
class cons
{
    int a;
public:

    cons(int n )
    {
        a=n;
    }

    cons(cons &k)
    {
        a=k.a;
    }
    void print()
    {
        cout<<a;
    }
};
int main()
{
    cons p(10);
    cons s(p);
    s.print();

}
