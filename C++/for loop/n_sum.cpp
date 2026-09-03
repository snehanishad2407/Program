#include<iostream>
using namespace std;
int main(){
    int i=1,n,sum=0;
    cout<<"Enter any number for sum=";
    cin>>n;
    for(i=1;i<=n;i++)
        sum+=i;
        {
        cout<<"Sum of first "<<n<<" numbers is="<<sum<<endl;
    }
    return 0;
}