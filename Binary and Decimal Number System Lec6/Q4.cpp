#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n;
    cout<<"enter number";
    cin>>n;
    int i=0;
    int ans=0;
    while(n!=0){
        int digit=n%10;
        if(digit==1){
            ans+=pow(2,i);
        }
        i++;
        n=n/10;
    }
    cout<<ans;
    return 0;
}