#include<bits/stdc++.h>
using namespace std;
class Base
{
    public:
        virtual void display()
        {
            cout<<"Hello!From Base Class"<<endl;
        }
};
class Derived : public Base
{
    public:
        void display()
        {
            cout<<"Hello! From Derived Class"<<endl;
        }

};
int main()
{
    Derived derived1;

    Base *base1=&derived1;
    base1->display();


    return 0;
}
