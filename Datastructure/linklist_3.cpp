#include<iostream>
#include<cstdlib>
using namespace std;
struct node
{
    int x;
    struct node *next;
};
struct node *head=NULL,*temp,*temp1,*curr,*tail,*Delete,*pre;
void insert_atbeg()
{
    curr=(node*)malloc(sizeof(node));
    cout<<endl;
    cin>>curr->x;
    curr->next=NULL;
    temp=head;
    head=curr;
    curr->next=temp;
}
void insert_any_pos()
{
    int pos;
    temp=head;
    cout<<endl;
    cout<<"Enter the position:";
    cin>>pos;
    curr=(node*)malloc(sizeof(node));
    cin>>curr->x;
    for(int i=0;i<pos;i++)
    {
        temp1=temp;
        temp=temp->next;
    }
    temp1->next=curr;
    curr->next=temp;

}
void delete_beg()
{
    temp1=head;
    head=temp1->next;
    free(temp1);
}
void del_any_pos()
{
    int pos;
    temp=head;
    cout<<"Enter position:";
    cin>>pos;
    for(int i=0;i<pos;i++)
    {
        temp1=temp;
        temp=temp1->next;

    }
    temp1->next=temp->next;
    free(temp);
}
void del_in_last()
{
    temp=head;
    while(temp->next!=NULL)
    {
        temp1=temp;
        temp=temp->next;
    }
    free(temp);
    temp1->next=NULL;
}
void del_negative()
{
    temp=head;
    while(temp!=NULL)
    {
        if(temp->x<0)
        {
            temp1->next=temp->next;
            Delete=temp;
            free(temp);

        }
        else{
            temp1=temp;
            //temp=temp->next;
        }
        temp=temp->next;
    }
}
void del_even()
{
    temp=head;
    while(temp!=NULL)
    {
        if(temp->x%2==0)
        {
            temp1->next=temp->next;
            Delete=temp;
            free(temp);

        }
        else{
            temp1=temp;
            //temp=temp->next;
        }
        temp=temp->next;
    }
}
void del_same_data()
{
    temp=head;
    while(temp!=NULL)
    {
        temp1=temp->next;
        while(temp1!=NULL)
        {
            if(temp1->next)
            {
              pre=temp;
              Delete=temp1;
              pre->next=temp1->next;
              free(Delete);
              temp1=temp1->next;
            }
            else
            {
                pre=temp1;
                temp1=temp1->next;
            }
            temp=temp->next;
        }


    }

}
void display()
{
   curr=head;
   cout<<endl;
   while(curr!=NULL)
   {
       //cout<<"input value:"<<endl;
       cout<<curr->x;
       curr= curr->next;
   }
}

int main()
{
    cout<<"Enter number :"<<endl;
for(int i=0;i<3;i++)
{
    curr=(node*)malloc(sizeof(node));
    cin>>curr->x;
    curr->next=NULL;
    if(head==NULL)
    {
        head=curr;
        temp=head;
        tail=curr;
    }
    else{
        tail->next=curr;
        tail=tail->next;
    }
}
//display();
//insert_atbeg();
//display();
//insert_any_pos();
//delete_beg();
//del_any_pos()
//del_any_pos();
//del_in_last();
//del_negative();
//display();
//del_even();
del_same_data();

display();
}
