// #include<iostream>
// using namespace std;
// void aman() {    // Function
//     cout<<"Good Morning"<<endl;
//     cout<<"How are you"<<endl;
// }
// int main() {
//     aman();
//     cout<<"Hey Aman"<<endl;
//     aman();
// }



//what is the purpose of return

#include<iostream>
using namespace std;
void aman() {    // Function
    cout<<"Good Morning"<<endl;
    cout<<"How are you"<<endl;
    return;
    cout<<"Good Morning"<<endl; // return ke baad jitna v line ka code likha ho uska kuch v output nhi milta hai.kind like break.
}
int main() {
    aman();
}