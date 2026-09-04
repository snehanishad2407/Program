#include <iostream>
using namespace std;
int main()
{
    int i=1,n;
    cout<<"Enter any num for even numbers=";
    cin>>n;
        cout<<"Even numbers from 1to "<<n<<" is="<<endl;

    for(i=1;i<=n;i++)
    {
        if(i%2==0)
        {
            cout<<i<<endl;
        }
    }
    cout<<"Total even numbers="<<n/2<<endl;
    return 0;
}