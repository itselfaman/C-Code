// print the  sum 1 to n
#include<iostream>
using namespace std;
int main() {
    int n;
    cout<<"Enter the number of digits: ";
    cin>>n;
    int sum=0;
    for(int i=1;i<=n;i++) {
        sum+=i;
    }
    cout<<sum;
}