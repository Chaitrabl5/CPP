#include <iostream>
using namespace std;
int search(int arr[],int n,int x)
{
    for(int i=0;i<n;i++)
    {
        if(arr[i]==x)
           return i;
    }
    return 0;

}
int main()
{
    int arr[]={12,23,34,56};
    int x=34;
    cout<<"searched index="<<search(arr,4,x)<<endl;
    return 0;
}