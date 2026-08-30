#include<iostream>
using namespace std;
int main()
{
    float x,y;
    cout<<"Enter x coordinate: ";
    cin>>x;
    cout<<"Enter y coordinate: ";
    cin>>y;
    if(x==0 && y==0)
    {
    cout<<"Origin"<<endl;
    }
    else if (y==0)
    {
        cout<<"X-axis"<<endl;
    }
    else if (x==0)
    {
        cout<<"Y-axis"<<endl;
    }
    else if (x>0 && y>0)
    {
        cout<<"Quadrant 1"<<endl;
    }
    else if (x<0 && y>0)
    {
        cout<<"Quadrant 2"<<endl;
    }
    else if (x<0 && y<0)
    {
        cout<<"Quadrant 3"<<endl;
    }
    else if (x>0 && y<0)
    {
        cout<<"Quadrant 4"<<endl;
    }
return 0;    
}