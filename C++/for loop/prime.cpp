#include <iostream>
using namespace std;
int main(){
    int i,count=0;
    cout<<"Enter any number=";
    cin>>i;
    for(int j=1;j<=i;j++)
    {
        if(i%j==0)
        {
            count++;

        }
    }
    if(count==2)
    {
        cout<<i<<" is a prime number"<<endl;
    }
    else
    {
        cout<<i<<" is a composite number"<<endl;
    }
    return 0;
}