#include<iostream>
using namespace std;
// int main(){
//     int x = 21;
//     int y = 44;
//     int *p1 = &x;
//     int *p2 = &y;
//     cout<<*p1 + *p2; 
//     }

int main(){
    int x,y;
    int *p1 = &x;
    int *p2 = &y;
    cout<<"Enter first number : ";
    cin>>*p1;
    cout<<"Enter second number : ";
    cin>>*p2;
    cout<<*p1 + *p2;
}


