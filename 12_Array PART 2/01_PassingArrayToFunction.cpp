#include<iostream>
using namespace std;
void display(int a[], int size){ // int* a
    for(int i = 0; i<=size-1; i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    return;
    }
    void change(int b[], int size){
        b[0] = 100; // *ptr = 100 both line are same
        b[6] = 98;
    }
int main(){
    int arr[] = {1,2,3,4,5,6,7,8};
    int size = sizeof(arr)/sizeof(arr[0]);
    cout<<size<<endl;
    display (arr, size);
    change(arr, size);
    display(arr, size);
}