// Make a function which calculates 'a' raised to the power 'b' using recursion:
#include<iostream>
using namespace std;
int pow(int x,int y) {
    if(y==0)
        return 1;
        return x * pow(x,y-1);
}
int main() {
    int x;
    cout<<"Enter x:";
    cin>>x;
    int y;
    cout<<"Enter y:";
    cin>>y;
    cout<<pow(x,y);
}
