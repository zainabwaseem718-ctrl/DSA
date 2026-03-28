#include<iostream>
#include<algorithm>
using namespace std;


//Insertion at begning
void insertBeg(int arr[],int &size){
    for(int i=size-1;i>0;i--){
        arr[i]=arr[i-1];
    }
    arr[0]=6;
     size++;
}
//Insertion at Ending
void insertEnd(int arr[],int &size,int capacity,int value){
    if(size>=capacity){
        cout<<"Array is full no data can be enetered"<<endl;
        return;
    }
   
    arr[size]=value;
     size++;
}
//Insertion at any point
void insertpos(int arr[],int &size,int capacity,int pos,int value){
    if(size>=capacity){
        cout<<"Array is full no data can be enetered"<<endl;
        return;
    }
    if(pos<0||pos>size){
        cout<<"Invalid Position"<<endl;
        return;
    }
    for(int i=size;i>pos;i--){
        arr[i]=arr[i-1];
    }
   
    arr[pos]=value;
     size++;
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
        int value;
        int pos;
        int capacity=100;
        cout<<"Enter the position : ";
        cin>>pos;
        cout<<endl;
        cout<<"Enter value to insert at last : ";
        cin>>value;
        cout<<"Orignal Array : ";
        printArray(arr,size);
        //insertBeg(arr,size);
        cout<<endl;
        //insertEnd(arr,size,capacity,value);
       // cout<<"After Insert at Begning : ";
         //cout<<"Isertion at Ending : " ;
         insertpos(arr,size,capacity,pos,value);
         cout<<"After Insertion at any point : ";
         
         printArray(arr,size);


         return 0;


    
}