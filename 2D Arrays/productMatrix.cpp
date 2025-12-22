// Find the product of all elements in a given matrix.

#include<iostream>
using namespace std;
int main() {
    int a[4][2] = {{1,2},{1,2},{1,2},{1,2}};
    int product = 1;
    for(int i = 0; i < 4; i++) {
        for(int j = 0; j < 2; j++) {
            product *= a[i][j];
        }
    }
    cout<<product<<endl;
}
