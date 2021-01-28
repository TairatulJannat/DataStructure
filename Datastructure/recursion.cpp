#include<iostream>
using namespace std;
int gcd(int a,int b)
{
    if (b!=0)
    {
        return a;
    }
    else{
        return gcd(b, a%b);
    }
}
int main()
{
    int x1,x2;
    cout<<"Enter two number:\n";
    cin>>x1>>x2;
    cout<<"GCD of two number:"<<gcd(x1,x2);
    return 0;
}
