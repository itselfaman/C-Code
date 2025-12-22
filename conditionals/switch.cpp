// Ques: Write a program to create a calculator that performs basic arithmetic operations (add, subtract, multiply and divide) using switch case. The calculator should input two numbers and an operator from user.

#include<iostream>
using namespace std;
int main()
{
    int a;
    cout<<"Enter the Number of a : ";
    cin>>a;
    char op;
    cin>>op;
    int b;
    cout<<"Enter the Number of b : ";
    cin>>b;
    switch(op){
        case '+':
            cout<<a+b<<endl;
            break;
        case '-':
            cout<<a-b<<endl;
            break;
        case '*':
            cout<<a*b<<endl;
            break;
        case '/':
            cout<<a/b<<endl;
            break;
        default:
            cout<<"Invalid Operator"<<endl;
    }
}
