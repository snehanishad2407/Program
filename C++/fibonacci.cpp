#include<iostream>
using namespace std;

int fibonacci(int n){
    if(n<=1)
    return n;
    return fibonacci(n-1) + fibonacci(n-2);
}
int main(){
    int n;
    cout<<"enter any number=";
    cin>>n;
    cout<<"The "<<n<<" th fibonacci number is:"<<fibonacci(n-1)<<endl;
    return 0;
}