#include<iostream>
using namespace std;
int main()
{
    int a=2,b=3;
    int *p,*q;
    p=&a;
    cout<<"p:"<<*p<<endl;
    q=p;
    cout<<"q:"<<*p<<endl;
    *q=10;
    cout<<"q:"<<*q<<endl;
    cout<<"p:"<<*p<<endl;
    q=&b;
    cout<<"q:"<<*q<<endl;
    *p=*q;
    cout<<"p:"<<*p<<endl;
}



