#include<iostream>
using namespace std;
void printarray(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}
void Bubblesort(int arr[],int size){
    for(int i=0;i<size;i++){
        for(int j=0;j<size-i-1;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
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
    Bubblesort(arr,size);
    printarray(arr,size);
    return 0;

}
