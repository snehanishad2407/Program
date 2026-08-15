#include<iostream>
using namespace std;
int main()
{
  int choice;
  cout<<"==== Student Management System ===="<<endl;
  cout<<"1. Add Student"<<endl;
  cout<<"2. Display Student"<<endl;
  cout<<"3. Exit"<<endl;
  cout<<"Enter your choice:";
  cin>>choice;
  string name;
  int age;
  int rollNo;
  cout<<"Enter student name:";
  getline(cin,name);
  cout<<"Enter age:";
  cin>>age;
  cout<<"Enter Roll number:";
  cin>>rollNo;
  cout<<"\n--- Student Details ---"<<endl;
  cout<<"Name:"<<name<<endl;
    cout<<"Age:"<<age<<endl;
  cout<<"Roll Number:"<<rollNo<<endl;
  
  return 0;
}
