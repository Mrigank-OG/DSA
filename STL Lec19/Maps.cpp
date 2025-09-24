#include<iostream>
#include<map>
using namespace std;
int main(){
    map<int,string>m;
    m[1]="one";
    m[2]="two";
    m.insert({5,"bheem"});
    for(auto i:m){
        cout<<i.first<<" "<<i.second<<endl;
    }
    m.clear();
    cout<<"after clearning";
    for(auto i:m){
        cout<<i.first<<" "<<i.second<<endl;
    }
    return 0;
}