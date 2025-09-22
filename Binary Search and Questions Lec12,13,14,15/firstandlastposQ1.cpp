#include<iostream>
using namespace std;
int main(){
    int s=0,e=10,key;
    cout<<"enter element";
    cin>>key;
    int arr[11]={1,1,2,2,2,2,3,3,3,4,4};
    int first=-1;
    int last=-1;
    int mid=(s+e)/2;
    while(s<=e){
        if(arr[mid]<key){
            s=mid+1;
        }
        else if(arr[mid]>key){
            e=mid-1;
        }
        else if(arr[mid]==key){
            first=mid;
            e=mid-1;
        }
        mid=(s+e)/2;
    }
    s=0;
    e=10;
    while(s<=e){
        if(arr[mid]<key){
            s=mid+1;
        }
        else if(arr[mid]>key){
            e=mid-1;
        }
        else if(arr[mid]==key){
            last=mid;
            s=mid+1;
        }
        mid=(s+e)/2;
    }
    cout<<"first pos"<<first;
    cout<<"\nlast pos"<<last;
    return 0;
}