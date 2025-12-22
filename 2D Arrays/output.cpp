// #include<iostream>
// using namespace std;
// int main() {
//     int arr[2] [3];
//     arr[0][0] =6;
//     arr[0][1] =7;
//     arr[0][2] =8;
//     arr[1][0] =9;
//     arr[1][1] =10;
//     arr[1][2] =11;
//     for(int i=0;i<2;i++) { //row
//         for(int j=0;j<3;j++) { //column
//             cout<<arr[i][j]<<" ";
//         }
//         cout<<endl;
//     }
// }

// Print transpose of matrix.

#include<iostream>
using namespace std;
int main() {
    int arr[2] [3];
    arr[0][0] =6;
    arr[0][1] =7;
    arr[0][2] =8;
    arr[1][0] =9;
    arr[1][1] =10;
    arr[1][2] =11;
    for(int j=0;j<3;j++) { //column
        for(int i=0;i<2;i++) { //row
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}