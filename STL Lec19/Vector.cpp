#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<int> v;
    v.push_back(4);
    cout<<"size"<<v.capacity()<<endl;
    v.push_back(3);
    cout<<"size"<<v.capacity()<<endl;
    v.push_back(2);
    cout<<"size"<<v.capacity()<<endl;
    v.push_back(1);
    cout<<"size"<<v.capacity()<<endl;
    cout<<v.size()<<endl;
    
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }cout<<endl;
    cout<<v.front()<<endl;
    cout<<v.back()<<endl;
    sort(v.begin(),v.end());
    //v.clear();
     for(int i=0;i<v.size();i++){
       cout<<v[i]<<" ";
     }cout<<endl;
    return 0;
}