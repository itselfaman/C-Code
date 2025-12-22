#include<iostream>
using namespace std;
void aman() {
    cout<<"Hello"<<endl;
    aman();
}
int main() {
    aman();
}