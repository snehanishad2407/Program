#include<iostream>
using namespace std;
int main(){
    int units;
    float bill=0, surcharge=0, totalBill;
    cout<<"Enter electricity units: ";
    cin>>units;
    if(units<100){
        bill=units*2;
    }
    else if(units<=200){
        bill=(100*2)+(units-100)*3;
    }
    else if(units<=300){
        bill=(100*2)+(100*3)+(units-200)*5;
    }
    else{
        bill=(100*2)+(100*3)+(200*5)+(units-400)*7;
    }
    if(bill>2000){
        surcharge=bill*0.05;
    }
    totalBill=bill+surcharge;
    cout<<"Base Bill: Rs."<<bill<<endl;
    cout<<"Surcharge: Rs."<<surcharge<<endl;
    cout<<"Total Bill: Rs."<<totalBill<<endl;
return 0;
}
