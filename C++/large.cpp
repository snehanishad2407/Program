#include<iostream>
using namespace std;
int main(){
    int nums[5]={34,56,78,89,280};
    int size=5;
    int largest=INT16_MIN;
    for(int i=0;i<size;i++){
        if(nums[i]>largest){
            largest=nums[i];

        }
    }
cout<<"largest="<<largest<<endl;
return 0;

}
