//wap to find the highest factor of a number 'n'(other than n itself)
// #include<iostream>
// using namespace std;
// int main() {
//     int n;
//     cout<<"enter n:";
//     cin>>n;
//     int a = 1;
//     for(int i=1;i<n;i++){
//         if (n%i==0)
//             a = i;
//     }
//     cout<<a;
// }

#include<iostream>
using namespace std;
int main() {
    int n;
    cout<<"enter n:";
    cin>>n;
    int a = 1;
    for(int i=1;i<=n/2;i++){
        if (n%i==0)
            a = i;
    }
    cout<<a;
}