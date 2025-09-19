#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n,i=0;
    cout<<"enter number";
    cin>>n;
    int ans=0;
    while(n!=0){
        int digit=n&1;
        ans=ans+(digit*int(pow(10,i)));
        n=n>>1;
        i++;
    }
    cout<<ans+1;
    return 0;
}