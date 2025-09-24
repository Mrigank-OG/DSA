#include<iostream>
#include<deque>
#include<algorithm>
using namespace std;
int main(){
    deque<int> d ;
    d.push_back(1);
    d.push_front(2);
    d.push_front(3);
    for(int i:d){
        cout<<i<<" ";
    }cout<<endl;
    //cout<<d.at(0);
    d.pop_back();
    d.pop_front();
        for(int i:d){
        cout<<i<<" ";
    }cout<<endl;

}