#include<iostream>
using namespace std;
int main(){
    int arr[5]={7,9,1,2,3};
    int s=0,e=4;
    int mid=s+(e-s)/2;
    while(s<e){
        if(arr[mid]>=arr[0]){
            s=mid+1;
        }
        else{
            e=mid;
        }
        mid=s+(e-s)/2;
    }
    cout<<"the pivot element is"<<arr[mid];
    return 0;
}