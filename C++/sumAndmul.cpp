#include<iostream>
using namespace std;

void sumAndProduct(int arr[],int n){
    int sum=0;int product=1;
    for(int i=0;i<n;i++){
        sum+=arr[i];
        product*=arr[i];
    }
    cout<<"sum="<<sum<<endl;
    cout<<"product="<<product<<endl;
}
int main(){
    int arr[5]={1,2,3,4,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    sumAndProduct(arr,n);
    return 0;
}