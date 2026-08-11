#include<iostream>
using namespace std;
int minOfTwo(int a,int b){
    if(a<b){
        return a;
    } else{
        return b;
    }
}

int main() {
    cout<<"min="<<minOfTwo(10,20)<<endl;

return 0;
}

