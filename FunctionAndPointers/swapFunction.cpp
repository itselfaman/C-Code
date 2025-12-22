#include<iostream>
using namespace std;
void swap(int x, int y) {
    x=x+y;
    y=x-y;
    x=x-y;
    cout<<x<<" "<<y<<endl;
    return;
}
int main() {
    int x = 2;
    int y = 5;
    cout<<x<<" "<<y<<endl;
    swap(x, y);
}

