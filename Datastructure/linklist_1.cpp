#include<iostream>
using namespace std;
void sortarray(int n, int *p)
{
    for(int i=0; i<n-1; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if(*(p+i)>*(p+j))
        {

             int temp= *(p+i);
                *(p+i)=*(p+j);
                *(p+j)=temp;
        }

        }
    }
    for(int i=0; i<n; i++)
   {
    cout<<*(p+i)<<" ";
   }
}

int main()
{
    int arr[100];
    int num;
    cout<<"how much number: ";
    cin>> num;
    for(int i=0;i<num;i++)
    {
        cin>>arr[i];
    }
    sortarray(num,arr);

}
