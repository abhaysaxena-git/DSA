#include<iostream>
using namespace std;
void find(int n, int *ptr1, int *ptr2){
    *ptr2 = n%10; //lastdigit
    while (n>9)
    {
        n = n/10;
    }
    *ptr1 = n;
    return;
}
int main(){
    int n;
    cout<<"Enter n : ";
    cin>> n; 
    int firstDingit, lastDigit;
    int *ptr1 = &firstDingit;
    int *ptr2 = &lastDigit;
    find(n,ptr1,ptr2);
    cout<<firstDingit<<" "<<lastDigit;
}