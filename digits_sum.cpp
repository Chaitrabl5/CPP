/*Program to find the sum of digits of a number
Here we will discuss how to find the sum of digits of a number in C++ programming language.

To find the sum of digits in a number we will use loops along with two arithmetic operators, ‘/ ’ and ‘% ’.
Eg: number =12345
Sum of digit of number=1+2+3+4+5
Ans= 15*/
//C++ Program
//Sum of digits in a number
#include<iostream>
using namespace std;
int main()
{
    int num,sum=0;
    cout<<"Enter any num : ";
    //user input
    cin>>num;

    //loop to find sum of digits
    do
    {
        sum+=num%10;
        num=num/10;

    }while(num!=0);

        //output

    cout<<"\nSum of digits in given integer is: "<<sum;
    return 0;

}

