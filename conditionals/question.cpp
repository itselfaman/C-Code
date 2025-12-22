// *Ques: If cost price and selling price of an item is input through the keyboard, write a program to determine whether the seller has made profit or incurred loss or no profit no loss. Also determine how much profit he made or loss he incurred.
// #include<iostream>
// using namespace std;
// int main()
// {
//     int cp;
//     cout<<"Enter cost price: ";
//     cin>>cp;
//     int sp;
//     cout<<"Enter selling price: ";
//     cin>>sp;
//     if(sp>cp){
//         cout<<"Profit is "<<sp-cp;
//     }
//     else if(sp<cp){
//         cout<<"loss is "<<cp-sp;
//     }
//     else{
//         cout<<"no Profit no loss";
//     }
// }

// Ques:Given the length and breadth of a rectangle, write a program to find whether the area of the rectangle is greater than its perimeter.

#include<iostream>
using namespace std;
int main()
{
    int l;
    cout<<"Enter the length: ";
    cin>>l;
    int b;
    cout<<"Enter the breadth: ";
    cin>>b;
    int a = l*b;
    cout<<"Area of Rectangle: "<<endl;
    cout<<a;
    int p = 2*(l+b);
    cout<<"Area of perimeter: ";
    cout<<p;

}