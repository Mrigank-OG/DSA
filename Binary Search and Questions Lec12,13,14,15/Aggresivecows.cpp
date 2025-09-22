#include<iostream>
using namespace std;
bool ispossi(int arr[],int k,int mid,int size){
    int cow=1;
    
    int lastpos=arr[0];
    for(int i=0;i<size;i++){
        if(arr[i]-lastpos>=mid){
            cow++;
            if(cow==k){
                return true;
            }
            lastpos=arr[i];
        }
    
    }
    return false;
}
int main(){
    int arr[5]={1,2,3,4,6};//sorted here but not in qs
    int k=2;
    int s=0;
    int e=5;
    int mid=s+(e-s)/2;
    int ans=-1;
    while(s<=e){
        if(ispossi(arr,2,mid,5)){
           ans=mid;
           s=mid+1; 
        }
        else{
            e=mid-1;
        }
        mid=s+(e-s)/2;
    }
    cout<<ans;
    return 0;
}