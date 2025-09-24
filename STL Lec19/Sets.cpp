#include<iostream>
#include<set>
using namespace std;
int main(){
    set<int>s;
    s.insert(1);
    s.insert(3);
    s.insert(2);
    s.insert(4);
    s.count(4);
    set<int>::iterator p=s.begin();
    s.erase(p);
    cout<<s.count(2)<<endl;
    for(int i:s){
        cout<<i<<" ";
    }cout<<endl;

}