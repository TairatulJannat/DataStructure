#include<iostream>
#include<cstring>
using namespace std;
struct student
{
    int id;
    char name[100];
};
int main()
{
    student sl,*p;
    sl.id=002;
    strcpy(sl.name,"hello");
    p=&sl;
    cout<<p->name<<endl;
    cout<<p->id<<endl;
}
