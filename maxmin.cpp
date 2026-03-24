#include<iostream>
using namespace std;
int main(){
    int size;
    cout<<"Enter a size of array : ";
    cin>>size;
    int num[100];
    for(int i=0;i<size;i++){
        cin>>num[i];
    }
    int getmax(int num[],int size);
    cout<<"Maximum number of array is : "<<getmax(num,size)<<endl;;
    int getmin(int num[],int size);
    cout<<"Minimum number of array is : "<<getmin(num,size)<<endl;;
    return 0;
}
int getmax(int num[],int size){
   // int max=INT_MIN;
   int maxi=INT_MIN;
    for(int i=0;i<size;i++){
        //userdefined
       int maxi=max(maxi,num[i]);
      //  if(num[i]>max){
       //     max=num[i];
      //  }
       
    }
  //  cout<<"Maximum number of array is : "<<max;
  return maxi;
}
int getmin(int num[],int size){
    int min=INT_MAX;
    for(int i=0;i<size;i++){
        if(num[i]<min){
            min=num[i];
        }
    }
  return min;
}