#include<iostream>
using namespace std;
void printarray(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}
void insertionsort(int arr[],int size){
    int i,j;
    for(i=1;i<size;i++){
        int temp=arr[i];
        for(j=i-1;j>=0;j--){
            if(arr[j]>temp){
                arr[j+1]=arr[j];
            }
            else{
                break;
            }
        }
        arr[j+1]=temp;
    }
}
int main(){
    int size;
    cout<<"enter size";
    cin>>size;
    int *arr=(int*)malloc(size*sizeof(int));
    for(int i=0;i<size;i++){
        cout<<"enter "<<(i+1)<<" element of array"<<endl;
        cin>>arr[i];
    }
    cout<<"the orignal array is"<<endl;
    printarray(arr,size);
    cout<<endl<<"the sorted array is"<<endl;
    insertionsort(arr,size);
    printarray(arr,size);
    return 0;

}
