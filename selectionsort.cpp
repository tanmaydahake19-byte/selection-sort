#include<iostream>
using namespace std;

int main()
{
    int A[]={4,7,2,8,1,9},i,min;
    int n=5,temp;
    cout<<"\nBefore sorting:";
    for(i=0;i<=5;i++)
    {
        cout<<A[i]<<"\t";
    };
    A[0]=min;
    for(i=0;i<=5;i++)
    {
        if(A[i]<min)
        {
            A[i]=min;
        }
    };
    for(i=0;i<=n-1;i++)
    {
        int min=i;
        for(int j=i+1;j<n;j++)
        {
            if(A[j]=A[min])
            {
                min=j;
            }
        }
        temp=A[i];
        A[i]=A[min];
        A[min]=temp;
    }
    cout<<"\nsorted Array:";
    for(i=0;i<n;i++)
    {
        cout<<A[i]<<"\t";
    }
    
    return 0;
}