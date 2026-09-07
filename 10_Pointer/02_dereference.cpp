#include<iostream>
using namespace std;
int main(){
    int x = 21;
    int *p = &x;
    //cout<<&x<<endl;
    // cout<<*p;
    cout<<x<<endl;
    *p = 6;
    cout<<x;
}


