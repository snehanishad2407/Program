#include<iostream>
using namespace std;
int main(){
    int arr[5]={5,8,250,72,-6};
    int size=5;
    int min=0, max=0;
    for(int i=1;i<size;i++){
        if(arr[i]<arr[min])
        min=i;
    if(arr[i]>arr[max])
    max=i;
}
swap(arr[min],arr[max]);
for(int i=0;i<size;i++)
cout<<arr[i]<<" ";
return 0;
}