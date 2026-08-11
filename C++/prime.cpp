#include<iostream>
#include<cmath>
using namespace std;
bool isPrime(int num){
    if(num<=1)
    return false;

    for(int i=2;i<=sqrt(num);i++){
        if(num%i==0){
        return false;
    }
}
    return true;
}
int main(){
    int n;
    cout<<"enter any number=";
    cin>>n;
    cout<<"Prime numbers from 1to" <<n<<"are:"<<endl;
    for(int i=1;i<=n;i++){
        if (isPrime(i)){
            cout<<i<<" ";
        }
    }
    cout<<endl;
    return 0;
}
