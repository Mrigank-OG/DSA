#include<iostream>
using namespace std;
int pivot(int arr[],int s,int e){
    
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
    return mid;
}
int Binarysearch(int arr[],int s,int e,int key){
    int mid=s+(e-s)/2;
    while(s<=e){
        if(arr[mid]==key){
            return mid;
        }
        else if(arr[mid]>key){
            e=mid-1;
        }
        else{
            s=mid+1;
        }
        mid=s+(e-s)/2;
    }
    return -1;
}
int main(){
    int arr[5]={7,9,1,2,3};
    int key=2;
    int ele=pivot(arr,0,4);
    int result;
    if(arr[ele]<key && arr[4]>key){
         result=Binarysearch(arr,ele,4,key);
    }
    else if(arr[ele]<key && arr[4]<key){
         result=Binarysearch(arr,3,5,key);
    }
    cout<<result;
    return 0;
}