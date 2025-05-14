#include<bits/stdc++.h>
using namespace std;
void swap(int *a,int *b)
{
    int temp= *b;
    *b= *a;
    *a= temp;
}
int main()
{
    int a,b;
    cin>>a>>b;

    cout<<"Before swap a= "<<a<<" and b= "<<b<<endl;
    swap(&a,&b);
    cout<<"After swap a= "<<a<<" and b= "<<b<<endl;

    return 0;
}
