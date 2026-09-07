#include<iostream>
using namespace std;
int main(){
//     int x = 4;
//     int *ptr = &x;
//     cout<<*ptr<<endl; // 4
//     ptr = ptr+1;
//     cout<< *ptr; // 6422284

    int x = 4;
    int *ptr = &x;
    cout<<*ptr<<endl; // 4
    // *ptr = *ptr+1;
    (*ptr)++;
    cout<< *ptr; // 5
}