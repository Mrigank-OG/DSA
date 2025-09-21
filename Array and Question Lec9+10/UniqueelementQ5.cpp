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
    int unique=0;
    for(i=0;i<n;i++){
        unique=unique^arr1[i];
    }
    cout<<"the unique element is"<<unique;

}