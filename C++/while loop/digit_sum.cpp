#include<iostream>
using namespace std;
int main()
{
    int n,sum=0;
    cout<<"Enter any number to find sum of digits=";
    cin>>n;
        while(n>0)
    {
        sum=sum+n%10;
        n=n/10;

    }
    cout<<"Sum of digits is="<<sum<<endl;

return 0;
}