#include<iostream>
using namespace std;
int main() {
    int x = 2;
    int y = 5;
    cout<<x<<" "<<y<<endl;
    int t;
    t = x;
    x = y;
    y = t;
    cout<<x<<" "<<y<<endl;
}