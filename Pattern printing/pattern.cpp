// print the given  pattern:
// ****
// ****
// ****
// ****
#include <iostream>
using namespace std;

int main() {
    int m;
    cout<<"Enter number of rows: ";
    cin>>m;
    int n;
    cout<<"Enter number of column: ";
    cin>>n;
    for (int i=1;i<=m;i++) {
        for (int j=1;j<=n;j++) {
            cout<<"* ";
        }
        cout<<endl;
    }
}

