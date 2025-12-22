#include<iostream>
using namespace std;
void aman() {    // Function
    cout<<"Hello aman"<<endl;
    return;
}
void priti() {
    cout<<"Hello priti"<<endl;
    aman();
}
int main() {
    cout<<"Hello main"<<endl;
    priti();
    return 0;
}