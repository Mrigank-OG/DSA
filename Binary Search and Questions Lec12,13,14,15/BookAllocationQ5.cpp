#include<iostream>
using namespace std;
bool ispossible(int arr[],int m,int n,int mid){
    int student=1;
    int Pagesum=0;
  for(int i = 0; i < n; i++) {
    if(Pagesum + arr[i] <= mid) {
        Pagesum += arr[i];
    }
    else {
        student++;
        if(student > m || arr[i] > mid) {
            return false;
        }
        Pagesum = arr[i];
    }
}

    return true;
}
int main(){
    int arr[4]={10,20,30,40};
    int s=0;
    int ans;
    int e=100;
    int mid=s+(e-s)/2;
    while(s<=e){
        if(ispossible(arr,2,4,mid)){
             ans=mid;
             e=mid-1;
        }
        else{
            s=mid+1;
        }
        mid=s+(e-s)/2;
    }
    cout<<ans;
}