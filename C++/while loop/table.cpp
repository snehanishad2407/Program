#include<iostream>
using namespace std;
int main(){
    int i=1,n;
    cout<<"Enter a number:";
    cin>>n;
    cout<<"Table of "<<n<<endl;
    while(i<=10)

    {
        
        cout<<n<<"*"<<i<<"="<<n*i<<endl;
        i++;
    
    }
    return 0;
}
