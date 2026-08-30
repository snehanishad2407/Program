#include<iostream>
#include<cmath>
#include<string>
using namespace std;
//Bad Code: Nested and hard to read
void checkResultOld(float marks,bool attendedExam) 
{
if(attendedExam==true){
    if(marks>=40.0) {
        cout<<"Pass"<<endl;
    } else{
        cout<<"Fail"<<endl;
    }
}else{
    cout<<"Absent"<<endl;
}
}
//Clean Code: Refactored and easy to read
void checkResultClean(float marks,bool attendedExam)
{
    //1.Guard clause: Handle edge case first
    if(!attendedExam) {
 
        cout<<"Absent"<<endl;
        return;
    }
    //2.Safe float comparison (Avoid Precision error)
    if(abs(marks-40.0f)<0.0001f){
        cout<<"Just Passed  (Borderline)!"<<endl;
        return;
    }
    //3.Using ternary operator for simple conditional logic
    string result = (marks>=40.0f) ? "Pass" : "Fail";
    cout<<result<<endl;
}

