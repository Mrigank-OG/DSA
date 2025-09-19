#include<iostream>
using namespace std;
int main(){
    int one=0;
    int zero=0;
    int n;
    cout<<"enter number";
    cin>>n;
    while(n!=0){
        if((n&1)==0){
            zero++;
        }
        else{
            one++;
        }
        n=n>>1;
    }
    cout<<"the number of ones is "<<one<<" the number of zeroes is "<< zero <<endl;
    return 0;

}