#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"Enter x :";
    cin>>x; 
    int y;
    cout<<"Enter y :";
    cin>>y; 
    x = x + y;
    y = x - y;
    x = x - y; 
    cout<<x<<" "<<y;
}