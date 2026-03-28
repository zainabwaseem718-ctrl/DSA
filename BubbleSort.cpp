#include<iostream>
#include<algorithm>
using namespace std;
void bubbleSort(int arr[],int size){

    for(int i=0;i<size-1;i++){
     //  for(int j=0;j<size-1;j++)Ye har baar poora array traverse kar raha hai unnecessary comparisons ho rahi hain

      for(int j=0;j<size-i-1;j++)//correct
      {
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }

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
        bubbleSort(arr,size);
        cout<<endl;
        cout<<"After Bubble Sorting : ";
         printSortArray(arr,size);

         return 0;


    
}