#include<iostream>
#include<algorithm>
using namespace std;
class solution{
    public:
void printArray(int arr[], int size){
    for(int i=0; i<size; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}
void intersection(int arr[],int brr[],int n ,int m){
    
    for(int i=0;i<n;i++){
      
      for(int j=0;j<m;j++){
        if(arr[i]==brr[j]){
       cout<<arr[i]<<" ";
        break;
      }
      
    }
   
}
}
};
int main(){
    solution s1;
    int arr[6]={3,1,6,8,0,6};
     int brr[5]={3,1,6,8,0};
    cout << "Original Arrays:" << endl;
   s1.printArray(arr,6);
   s1.printArray(brr,5);
   cout<<"Intersection:"<<endl;
   s1.intersection(arr,brr,6,5);
  //  s1.uniquenmbr(brr,5);
    
   //  s1.printArray(arr,6);
    // s1.printArray(brr,5);
   

    return 0;

}