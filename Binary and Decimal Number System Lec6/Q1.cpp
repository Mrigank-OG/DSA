#include<iostream>
using namespace std;
int main(){
    int sum=0;
    int prod=1;
    int num;
    cout<<"enter number"<<endl;
    cin>>num;
    while(num!=0){
        int digit=num%10;
        sum+=digit;
        prod*=digit;
        num=num/10;
    }
    cout<<"the difference of sum and product is "<<sum-prod<<endl;
    return 0;
}