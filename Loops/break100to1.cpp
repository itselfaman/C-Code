// #include<iostream>
// using namespace std;
// int main() {
//     int n;
//     cout<<"enter n:";
//     cin>>n;
//     for(int i=n/2;i>=1;i--) {
//         if (n%i==0) {
//             cout<<i<<" ";
//             break;
//         }
//     }
// }

//WAP TO CHECK IF A NUMBER IS COMPOSITE OR NOT:
#include<iostream>
using namespace std;
int main() {
    int n;
    cout<<"enter n:";
    cin>>n;
    bool flag = true; //true means prime
    for(int i=2;i<=n/2;i++) {
        if (n%i==0) {
            flag = false; // false means composite
            break; // to get out of the loop
        }
    }
    if (n==1)
        cout<<"Neither Prime Nor Composite";
    else if (flag==true)cout<<"prime";
    else cout<<"Composite";
}