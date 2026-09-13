#include<iostream>
using namespace std;
int main (){
    int n;
    cout<<"Enter the elements of array:";
    cin>>n;
    int arr[n];
    //input

    for(int i=0; i<=n-1; i++){
        cin>>arr[i];
    }
    int x;
    cout<<"Enter the element you want to search :";
    cin>>x;
    //Search
    //Cheack Mark

    bool flag = false; // false:-> not present.

    for(int i=0; i<=n-1; i++){
        if(arr[i]==x)  flag = true;
    }
    if(flag==true){
        cout<<"Element Found";
    }
     else
    cout<<"404 Element not Found";
}
    
