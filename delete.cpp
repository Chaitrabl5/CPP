#include <iostream>
#include <cmath>
using namespace std;
int delete_ele(int arr[],int n,int x)
{
    int i=0;
for(i=0;i<n;i++)
{
    if(arr[i]==x)
       break;
}
if(n==i)
  return n;
for(int j=i;j<n-1;j++)
{
  arr[j]=arr[j+1];
}
return  n-1;
}
int main()
{
    int arr[5];
    arr[0]=1,arr[1]=2,arr[2]=5,arr[3]=3,arr[4]=4;
    int n=5;
    for(int i=0;i<n;i++)
    {
        cout<<"before deletion"<<" "<<i<<" "<<arr[i]<<endl;
    }
int x=5;
n=delete_ele(arr,n,x);
for(int i=0;i<n;i++)
    {
        cout<<"after deletion"<<" "<<i<<" "<<arr[i]<<endl;
    }
}