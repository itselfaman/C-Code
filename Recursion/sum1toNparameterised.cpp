#include<iostream>
using namespace std;
void sum(int i,int n,int t) {
    if (i>n) {
        cout<<t<< endl;
        return;
    }
    sum(i+1,n,t+i);
}
int main() {
    int n;
    cout<<"Enter N:";
    cin>>n;
    sum(1,n,0);
}