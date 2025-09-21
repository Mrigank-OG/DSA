#include<iostream>
using namespace std;
void printarr(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<endl;
    }
}
int main(){
    int n,maxi=0,mini=0,i;
    cout<<"enter size of array";
    cin>>n;
    int arr1[n];
    for(i=0;i<n;i++){
        cout<<"enter "<<(i+1)<<" element of array"<<endl;
        cin>>arr1[i];
    }
    printarr(arr1,n);
    for(i=0;i<n;i++){
        //if(arr1[i]>=maxi){
            //maxi=arr1[i];
        //}
        maxi=max(maxi,arr1[i]);
    }
    for(i=0;i<n;i++){
        /*if(arr1[i]<=mini){
            mini=arr1[i];
        }*/
       mini=min(mini,arr1[i]);
    }
    cout<<"max"<<maxi;
    cout<<"\nmin"<<mini;
    return 0;
    

}