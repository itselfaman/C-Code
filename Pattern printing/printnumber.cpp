// print the given pattern:
// 1 1 1 1
// 2 2 2 2
// 3 3 3 3
#include <iostream>
using namespace std;

int main() {
    int m;
    cout<<"Enter side of square: ";
    cin>>m;
    for (int i=1;i<=m;i++) {
        for (int j=1;j<=m;j++) {
            cout<<i<<" ";
        }
        cout<<endl;
    }
}