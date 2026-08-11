#include<iostream>
using namespace std;
int main(){
    int num[]={3,6,-2,34};
    int size=4;
    int smallest=INT16_MAX;
    for(int i=0;i<size;i++){
        if(num[i]<smallest){
            smallest=num[i];
        }
    }
cout<<"smallest="<<smallest<<endl;
    return 0;
}
