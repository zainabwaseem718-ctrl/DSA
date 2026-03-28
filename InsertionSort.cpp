#include<iostream>
#include<algorithm>
using namespace std;
void InsertionSort(int arr[],int size){

    for(int i=0;i<size-1;i++){
     int j=i+1;
     while(j>=1 && arr[j]<arr[j-1]){
        swap(arr[j],arr[j-1]);
        j--;
     }
    }
    
}
void printSortArray(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int arr[]={4,6,1,8,4,3,2,1,1,4};
        int size=sizeof(arr)/sizeof(arr[0]);
        cout<<"Orignal Array : ";
        printSortArray(arr,size);
        InsertionSort(arr,size);
        cout<<endl;
        cout<<"After Bubble Sorting : ";
         printSortArray(arr,size);

         return 0;


    
}