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
    if(a<b and a<c){
        cout<<a<<" is lowest";
    }
    else if(b<a and b<c){
        cout<<b<<" is lowest";
    }
    else{
        cout<<c<<" is lowest";
    }
}
