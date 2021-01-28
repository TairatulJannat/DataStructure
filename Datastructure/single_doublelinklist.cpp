#include<iostream>
#include<cstring>
#include<cstdlib>
#include<windows.h>
using namespace std;
struct node
{

    string name;
    string id;
    float quiz;
    float average;
    struct node *next;
    struct node *pre;
};
struct  node *head=NULL, *head2=NULL,*curr,*curr2,*tail,*tail2;//*temp,*temp1,*temp2;
void insert_student()
{
    int n;
    while(1)
    {
        cout<<"\n\t[press 1 to Insert student name & id or press 2 to exit]:";
        cin>>n;
        if(n==1)
        {
            curr=new node;
            cout<<"\n\t Enter name:";
            cin>>curr->name;
            cout<<"\t  Enter id:";
            cin>>curr->id;
            curr->average=NULL;
            curr->next=NULL;
            curr->pre=NULL;
            if(head==NULL)
            {
                head=curr;
                tail=curr;
            }
            else{
                tail->pre=curr;
                tail=curr;
            }
        }
         else{
        cout<<"\n\t\t < - > Data Entry Complete. . . . . . . . . . . . . . .\n";
            break;
    }

    }

}
void quiz()
{
    cout<<"\n\t[Enter quiz Number]\n";
    curr=head;
    while(curr!=NULL)
    {
        head2=NULL;
        cout<<"\n\n\t Student's Name: " << curr->name<<endl;

        for(int i=0;i<3;i++)
        {
            cout<<"\n\t quiz no["<<i+1<<"]=";
            curr2=(node*)malloc(sizeof(node));
            cin>>curr2->quiz;
            curr2->next=NULL;
             if(head2==NULL)
            {
                head2=curr2;
                tail2=curr2;
            }
            else
            {
                tail2->next=curr2;
                tail2=curr2;
            }
        }
        curr->next=head2;
        curr=curr->pre;
    }
}
void aveg()
{
    curr=head;
    while(curr!=NULL)
    {
        int i=0;
        float sum=0;
        curr2=curr->next;
        float lowest=curr2->quiz;
        while(curr2!=NULL)
        {
            sum=sum+curr2->quiz;
            i++;
            if(lowest>curr2->quiz)
            {
                lowest=curr2->quiz;
            }
            curr2=curr2->next;
        }
        sum=sum-lowest;
        i--;

        curr->average=sum/i;
        curr=curr->pre;
    }
     cout<<"\n\n\t\t [Average mark has been added]\n\n";
}
void display()
{
    curr=head;
    while(curr!=NULL)
    {
        Sleep(300);
       cout<<"\n\t\t\t Student's Name : "<<curr->name;
       cout<<"\n\t\t\t Student's ID : "<<curr->id;
       curr2=curr->next;
       int i=0;
       while(curr2!=NULL)
       {
           cout<<"\n\tQuiz ["<<i+1<<"]= "<<curr2->quiz;
           curr2=curr2->next;
           i++;
       }
       if(curr->average!=NULL)
       {
           cout<<"\n\n\t\t Average of Best Two Quiz Mark : "<<curr->average;
            cout<<endl;
       }
       curr=curr->pre;
       cout<<endl;
    }
    cout<<"\n\n";
}
void menu()
{
    while(1)
    {
        Sleep(300);
        cout<<"\n\n\t\t\t------------- WELCOME --------------- \n\n";
        cout<<"\t 1. Insert Student "<<endl;
        cout<<"\t 2. Insert Marks "<<endl;
        cout<<"\t 3. Average "<<endl;
        cout<<"\t 4. Display "<<endl;
        cout<<"\t 5. Exit "<<endl;
        int n;
        cout<<"\n\t Enter choice:";
        cin>>n;
        if(n==1)
        {
            insert_student();
        }
        if(n==2)
        {
            quiz();
        }
        if(n==3)
        {
            Sleep(300);
            aveg();
        }
        if(n==4)
        {
            display();
        }
        if(n==5)
        {
            cout<<"\n\t\t\t THANK YOU \n";
            break;
        }
    }
}
int main()
{
    system("color 3f");
    menu();
    return 0;
}

