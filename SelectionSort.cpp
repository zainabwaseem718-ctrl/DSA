#include<iostream>
#include<algorithm>
using namespace std;
void SelectionSort(int arr[],int size){

    for(int i=0;i<size-1;i++){
    int min=INT_MAX;//to find minimum element
    int minIndex=-1;//minimum index
      for(int j=i;j<size;j++)//every time loop start from i iteration
      {
            if(min>arr[j]){
                min=arr[j];
                minIndex=j;
                
                
            }
             

        }
         swap(arr[i],arr[minIndex]);
      
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
        SelectionSort(arr,size);
        cout<<endl;
        cout<<"After Selection Sorting : ";
         printSortArray(arr,size);

         return 0;


    
}