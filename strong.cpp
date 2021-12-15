/*Program to check whether a number is a Strong Number or not
Strong Numbers is a number in which the sum of factorial of individual digits of the numbers is equal to the number itself.

To check for Strong Number, break the number into digits, find and add the factorial of each digit and lastly compare the result to the number. If both are equal then the number is a String Number else not a Strong Number.

For Example:145

Sum of factorial of digits of number   = 1! x 4! x 5=  145*/


//C++ program
    //Strong Number or not
    #include<iostream>
    using namespace std;
    //main Program
    int main()
    {
        int ip,sum=0;
        cout<<"Enter number to check: ";
            //user input
        cin>>ip;
        int save=ip;
        //logic to check for Strong Number starts
        while(ip)
        {
            int num=ip%10;
            int fact = 1;
            //finding factorial of each digit of input
            for(int i=num;i>0;i--)
            {
                fact=fact*i;
            }
            sum+=fact;
            ip/=10;
        }
        //checking for Strong Nunber
        if(sum==save)
        {
            cout<<save<<" is a Strong Number";
        }
        else
        {
            cout<<save<<" is not a Strong Number";
        }
        //logic ends
        return 0;
    }