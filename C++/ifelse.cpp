#include <iostream>
using namespace std; 
int main(){
    float marks;
    
    cout<<"Enter your marks=";
    cin>>marks;
    //Check for invalid input
    if(marks<0|| marks>100){
        cout<<"Invalid Marks! Please enter a value between 0 and 100.\n";
    }
    else if(marks>=90){
        cout<<"Grade A\n";
    }
    else if(marks>=75){
        cout<<"Grade B\n";

    }else if(marks>=60){
        cout<<"Grade C\n";

    }else if(marks>=50){
        cout<<"Grade D\n";

    }else{
        cout<<"Grade E\n";
    }
      return 0;
    }
