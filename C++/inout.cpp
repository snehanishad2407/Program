#include<iostream>
using namespace std;
int main(){
    float price,quantity;
    cout<<"Enter the price of the item: ";
    cin>>price; 
    cout<<"Enter the quantity of the item: ";
    cin>>quantity;
    float total=price*quantity;
    cout<<"Total Amount: "<<total<<endl;
    return 0;
}