#include <iostream>
#include <cmath>
using namespace std;
int insert(int arr[],int n,int x,int capacity,int pos)
{
if (n==capacity)
   return n;
int index=pos-1;   
for(int i=n-1;i>=index;i--)
{
    arr[i+1]=arr[i];
}
arr[index]=x;
return n+1;
}
int main()
{
    int arr[5];
    arr[0]=1,arr[1]=2,arr[2]=4,arr[3]=5;
    int n=4;
    int capacity=5;
    for(int i=0;i<n;i++)
    {
        cout<<"before insertion"<<" "<<i<<" "<<arr[i]<<endl;
    }
int x=3;
int pos=3;
n=insert(arr,n,x,capacity,pos);
for(int i=0;i<n;i++)
    {
        cout<<"after insertion"<<" "<<i<<" "<<arr[i]<<endl;
    }
}