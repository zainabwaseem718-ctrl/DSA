#include<iostream>
#include<algorithm>
using namespace std;


//Deletion from begning
void DeletionBeg(int arr[],int &size){
    for(int i=0;i<size-1;i++){
        arr[i]=arr[i+1];
    }
    
     size--;
}
//Deletion from Ending
void DeletionEnd(int arr[],int &size){
    
  if(size==0){
    cout<<"Array is empty "<<endl;
    return;
  }
     size--;
}
//Deletion from any point
void Deletionpos(int arr[],int &size,int pos){
   
    if(pos<0||pos>size){
        cout<<"Invalid Position"<<endl;
        return;
    }
    for(int i=pos;i<size-1;i++){
        arr[i]=arr[i+1];
    }
   
  
     size--;
}

    

void printArray(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int arr[100]={4,6,1,8,4,3,2,1,1,4};
       // int size=sizeof(arr)/sizeof(arr[0]);
       int size=10;
       int pos;
       cout<<"Enter index to Delete any element : ";
       cin>>pos;
       
        
        cout<<"Orignal Array : ";
        printArray(arr,size);
        // cout<<"After Deletion from Begning : ";
       // DeletionBeg(arr,size);
       
        
        //DeletionEnd(arr,size);
        cout<<endl;
       
        // cout<<"Deletion from Ending : " ;
         Deletionpos(arr,size,pos);
         cout<<"After Insertion at any point : ";
         
         printArray(arr,size);


         return 0;


    
}