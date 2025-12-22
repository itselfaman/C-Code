// Find the maximum elements in a given matrix.

#include<iostream>
using namespace std;
int main() {
    int a[4][2] = {{76,81},{13,76},{82,91},{80,91}};
    int maxVal = INT_MIN;
    for(int i = 0; i < 4; i++) {
        for(int j = 0; j < 2; j++) {
               maxVal = max(maxVal, a[i][j]);
            }
        }
    cout<<maxVal<<endl;
}