#include<iostream>
using namespace std;
int main()
{
    int i,n;
    cout<<"Enter any no. upto which you want to find squares=";
    cin>>n;

    for(int i=1;i<=n;i++)
    {
        cout<<"square of "<< i<<"="<<i*i<<endl;

    }
return 0;
}