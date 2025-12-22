// Given a matrix 'a' of dimension n x m and 2 coordinates (11, r1) and (12, r2). Return the sum of the rectangle from (11,r1) to (12, r2).

#include<iostream>
using namespace std;
int main(){
int arr[5][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16},{17,18,19,20}};
int sum = 0;
    int l1=1,r1=1,l2=3,r2=2;
for (int i=l1; i<=l2;i++) {
    for (int j=r1;j<=r2;j++) {
        sum +=arr[i][j];
    }
}
    cout<<sum;
}
