#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v; //you need not mention the size
    //inserting / input do not use []
    // v.push_back(1);
    // cout<<v.size()<<endl;
    // v.push_back(5);
    // cout<<v.size()<<endl;
    // v.push_back(3);
    // cout<<v.size()<<endl;
    // v.push_back(7);
    // cout<<v.size()<<endl;
    // v.push_back(8);
    // cout<<v.size()<<endl;
    //     cout<<endl;
    v.push_back(1);
    cout<<v.capacity()<<endl;
    v.push_back(5);
    cout<<v.capacity()<<endl;
    v.push_back(3);
    cout<<v.capacity()<<endl;
    v.push_back(7);
    cout<<v.capacity()<<endl;
    v.push_back(8);
    cout<<v.capacity()<<endl;
    //If you want to update / access
    // v[0] = 5;
    // cout<<v[0]<<" ";
    // cout<<v[1]<<" ";
    // cout<<v[2]<<" ";
    // cout<<v[3]<<" ";
    // cout<<v[4]<<" ";
}