#include<iostream>
using namespace std;
void print(int x  , int n) { // parameterise form
    while (x>n)
        return;
    cout<<x<<endl;
    print(x+1, n);
}
int main() {
    int n;
    cout<<"Enter n: ";
    cin>>n;
    print(1,n);
}