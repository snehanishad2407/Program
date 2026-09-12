#include<iostream>
using namespace std;
int main()
{
    int i,n;
    cout<<"Enter any number upto which you can find cubes=";
    cin>>n;
    cout<<"Cube numbers from 1 to "<<n<< " are="<<endl;
    for(int i=1;i<=n;i++)
    {
        cout<<"Cube of "<<i<<" is = "<<i*i*i<<endl; 
}
    return 0;
}