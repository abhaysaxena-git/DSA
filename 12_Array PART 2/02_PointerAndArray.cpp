#include<iostream>
using namespace std;
int main(){
    int arr[] = {1,2,4,5,6,7};
    int *ptr = arr;
    // cout<< arr<<endl;
    // cout<<&arr[0]<<endl;;
    // ptr[0] = 99;
    // for(int i=0; i<=5; i++){
    //     cout<<ptr[i]<<" ";
    // }
    for(int i=0; i<=5; i++){
        cout<<*ptr<<" ";
        ptr++;
    }
    ptr = arr; //ptr is pointing to 1st element of the array.
    *ptr = 8;
    ptr++; // ptr is pointing to  2nd element of the array
    *ptr = 9;
    ptr--; //ptr is pointing to the 1st element of the array.    
    cout<<endl; 
    for(int i=0; i<=5; i++){
        cout<<*ptr<<" ";
        ptr++;
    }
    ptr = arr;  //ptr is pointing to 1st element of the array.
}
