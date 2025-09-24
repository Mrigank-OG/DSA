#include<iostream>
using namespace std;
void printarray(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}
void selectionsort(int arr[],int size){
    for(int i=0;i<size;i++){
        int minindex=i;
        for(int j=i+1;j<size;j++){
            if(arr[j]<arr[minindex]){
                minindex=j;
            }
        }
        int temp=arr[minindex];
        arr[minindex]=arr[i];
        arr[i]=temp;
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
    selectionsort(arr,size);
    printarray(arr,size);
    return 0;

}
