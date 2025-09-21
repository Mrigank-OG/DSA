#include<iostream>
using namespace std;
int main(){
    int arr[6]={0,2,1,0,2,1};
    int s=0,m=0,e=5;
    while(s<e && m<e){
        if(arr[m]==2){
            swap(arr[m],arr[e]);
            m++;
            e--;
        }
        else if(arr[m]==0){
            swap(arr[m],arr[s]);
            m++;
            s++;
        }
        else{
            m++;
        }
    }
    for(int i=0;i<6;i++){
        cout<<arr[i] ;
    }
}