#include<iostream>
using namespace std;
int main()
{
    int i=1,n;
    cout<<"Enter any no. for printing odd numbers=";
    cin>>n;
    cout<<endl;
    for(i=1;i<=n;i++)
    {
        if(i%2!=0)
        {
            cout<<i<<endl;
        }
    }
    cout<<"Total odd numbers="<<(n+1)/2<<endl;
    return 0;
}