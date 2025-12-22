// print sum from 1 to n (return type)
#include<iostream>
using namespace std;
int sum(int n) {
     if(n==1)
          return 1;
    return sum(n-1) + n;
}
int main() {
    int n;
    cout<<"Enter N:";
    cin>>n;
    cout<<sum(n);
}