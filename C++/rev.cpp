#include<iostream>
using namespace std;
void reverseArray(int arr[],int size){
    int start=0, end=size-1;
    while(start<end){
        swap(arr[start],arr[end]);
        start++;
        end--;

    }
}
int main(){
    int arr[]={4,9,88,56,78,34,23};
    int size=7;
    reverseArray(arr,size);
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}