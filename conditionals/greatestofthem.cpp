#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"Enter 1st no : ";
    cin>>a;
    cout<<"Enter 2nd no : ";
    cin>>b;
    cout<<"Enter 3rd no : ";
    cin>>c;
    if(a>b and b>c)
    {
        cout<<"A is Greatest";
    }
    else if(b>a and b>c)
    {
        cout<<"B is Greatest";
    }
    else
    {
        cout<<"C is Greatest";
    }
}