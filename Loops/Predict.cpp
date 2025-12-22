//
// Created by Aman on 8/1/2025.
//

// #include<iostream>
// using namespace std;
// int main() {
//     int i;
//     while (i=10) {
//         cout<<i<<endl;
//         i = i+1;
//     }
// }


// #include<iostream>
// using namespace std;
// int main() {
//     int i=10;
//     while (i=20)
//         cout<<"\nA computer buff!"<<endl;
// }

#include<iostream>
using namespace std;
int main() {
    int x=4;
    int y=0;
    while(x>=0) {
        x--;
        y++;
        if(x==y)
            continue;
        else {
            cout<<x<<" "<<y<<endl;}
    }
}