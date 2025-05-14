#include<bits/stdc++.h>
using namespace std;
void sum(int a,int b,int c)
{
    int sum=0;
    sum=a+b+c;
    cout<<sum<<endl;
}
void sum(int a,int b)
{
    int sum=0;
    sum=a+b;
    cout<<sum<<endl;
}
int main()
{
    sum(10,20,30);
    sum(10,30);
}
