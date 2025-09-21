#include<iostream>
using namespace std;
int main(){
    int n,n100,n50,n20,n10,n1;
    cout<<"enter amount"<<endl;
    cin>>n;
    switch(1){
        case 1:
            n100=n/100;
            n=n%100;
        case 2:
            n50=n/50;
            n=n%50;
        case 3:
            n20=n/20;
            n=n%20;
        case 4:
            n10=n/10;
            n=n%10;
        case 5:
            n1=n/1;
            n=n%1;
            
    }
    cout<<"100 notes is"<<n100<<endl;
    cout<<"50 notes is"<<n50<<endl;
    cout<<"20 notes is"<<n20<<endl;
    cout<<"10 notes is"<<n10<<endl;
    cout<<"1 notes is"<<n1;




}