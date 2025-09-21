#include<iostream>
using namespace std;
void printarr(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<endl;
    }
}
int main(){
    int n,j,i;
    cout<<"enter size of array";
    cin>>n;
    int arr1[n];
    for(i=0;i<n;i++){
        cout<<"enter "<<(i+1)<<" element of array"<<endl;
        cin>>arr1[i];
    }
    printarr(arr1,n);
    for(i=0;i<n;i+=2){
        if(i==n-1){
            break;
        }
        int temp=arr1[i];
        arr1[i]=arr1[i+1];
        arr1[i+1]=temp;
    }
    printarr(arr1,n);
    return 0;
}