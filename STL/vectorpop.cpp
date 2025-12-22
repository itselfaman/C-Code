// #include<iostream>
// #include<vector>
// using namespace std;
// int main() {
//     vector<int> vec;
//     vec.push_back(1);  // o(1)
//     vec.push_back(2);
//     vec.push_back(3);
//     vec.push_back(4);
//     vec.push_back(5);
//     vec.emplace_back(6);
//     vec.pop_back(); // 0(1)
//     for (int val : vec) {
//         cout<<val<<" ";
//     }
//     cout<<endl;
//     return 0;
// }

// #include<iostream>
// #include<vector>
// using namespace std;
// int main() {
//     vector<int> vec(10,-1);
//     for (int val : vec) {
//         cout<<val<<" ";
//     }
//     cout<<endl;
//     return 0;
// }

#include<iostream>
#include<vector>
using namespace std;
int main() {
    vector<int> vec1={1,2, 3, 4, 5};
    vector<int>vec2(vec1);
    for (int val : vec2) {
        cout<<val<<" ";
    }
    cout<<endl;
    return 0;
}