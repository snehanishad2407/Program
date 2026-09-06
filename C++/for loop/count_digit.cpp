#include<iostream>
using namespace std;
int main()
{
    int n,count=0;
    cout<<"Enter any numbers to count digits=";
    cin>>n;
    for(;n!=0;n=n/10)
{    
    count++;
}
cout<<"Total digits are="<<count<<endl;

    return 0;
}
