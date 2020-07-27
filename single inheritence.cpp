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

};
int main()
{
    B q;
    q.print();
}
