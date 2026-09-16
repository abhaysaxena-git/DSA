#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v;
    v.push_back(9);
    v.push_back(10);
    v.push_back(34);
    v.push_back(77);
    v.push_back(32);
    v.push_back(9);
    v.push_back(18);
    v.push_back(38);
    int x = 9;
    int idx = -1;
    // for(int i=0; i<v.size(); i++){  //FORWARD LOOP
    //     if(v[i]==x) idx = i;
    // }

    for(int i=v.size()-1; i>=0; i--){  // BACKWORD LOOP
        if(v[i]==x){
            idx = i;
            break;
        } 
       
    } 
    cout<<idx;
}