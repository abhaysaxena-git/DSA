#include<iostream>
using namespace std;
void swap(int &x, int &y){ //pass by refence
    int temp = x;
    x = y;
    y = temp;
    return;
}
int main(){
    int x;
    cout<<"Enter x : ";
    cin>>x; 
    int y;
    cout<<"Enter y : ";
    cin>>y; 
    swap(x,y);
    cout<<x<<" "<<y;
    
}