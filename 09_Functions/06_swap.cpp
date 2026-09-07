#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"Enter x :";
    cin>>x; // x = 4
    int y;
    cout<<"Enter y :";
    cin>>y; // y = 5
    int temp = x;  // temp = 4
    x = y;  // x = 5
    y = temp; // y = 4
    cout<<x<<" "<<y;
}