#include<iostream>
#include<cstdlib>
using namespace std;
struct node
{
    int data;
    struct node *next;
};
struct node *top=NULL,*curr,*temp;
void push()
{
    int num;
    cout<<"How many Number:";
    cin>> num;
    for(int i=0;i<num;i++)
    {
           curr=(node*)malloc(sizeof(node));
           cin>>curr->data;
           curr->next=NULL;
           if(top==NULL)
           {
               top=curr;
           }
           else
           {
               temp=top;
               top=curr;
               top->next=temp;
           }

    }
}
void pop()
{
    temp=top;
    top=temp->next;
    free(temp);
}
void display()
{
    cout<<endl;
    curr=top;
    while(curr!=NULL)
    {
        cout<<curr->data<<"";
        curr=curr->next;
    }
}
int main()
{
    system("color 3f");
    while(1)
    {
        cout<<endl;
        cout<<"----------------- MENU -------------------"<<endl;
        cout<<"1. Insertion/Push stack "<<endl;
        cout<<"2. Print Stack "<<endl;
        cout<<"3. Pop Stack "<<endl;
        cout<<"4. Exit "<<endl;
        int choice;
        cin>>choice;
        if (choice==1)
        {
            push();
        }
        else if(choice==2)
        {
            display();
        }
        else if(choice==3)
        {
            pop();
        }
        else if(choice==4)
        {
            break;
        }
         else
        {
            cout<<"Wrong Input !"<<endl;
        }

    }
}
