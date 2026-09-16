#include<iostream>
#include<vector>
using namespace std;
int main(){
    int x;
    cout<<"Enter The Target : ";
    cin>>x;
    vector<int>v;
    int n;
    cout<<"Enter Array Size : ";
    cin>>n;
    
    cout<<"Enter Array Element : ";
    for(int i=0; i<n; i++){
        int a;
        cin>>a;
        v.push_back(a);
    }

    for(int i=0; i<=v.size()-2;i++){
        for(int j=i+1; j<=v.size()-1; j++){
            if(v[i]+v[j]==x){
                cout<<"("<<i<<","<<j<<")"<<endl;
            }
        }
    }
}