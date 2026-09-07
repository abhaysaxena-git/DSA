#include<iostream>
using namespace std;

void greeting(){
    cout<<"Good Morning"<<endl;
    cout<<"Have a nice day"<<endl;
}
void starTriangle(int x){
    for(int i=1; i<=x; i++){
        for(int j=1; j<=i; j++){
            cout<<"*";
        }
        cout<<endl;
    }
}
int main(){
    greeting(); //FUNCTION CALLING  
    starTriangle(4);
    starTriangle(5);
}