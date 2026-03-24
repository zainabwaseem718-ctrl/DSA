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
void uniquenmbr(int arr[],int size){
    
    for(int i=0;i<size;i++){
      int count=0;
      for(int j=0;j<size;j++){
        if(arr[i]==arr[j])
      //  cout<<arr[i]<<" ";
        count++;
      }
         if(count==1){
      cout<<arr[i]<<" ";
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
   cout<<"Unique Nembers are:"<<endl;
   s1.uniquenmbr(arr,6);
    s1.uniquenmbr(brr,5);
    
   //  s1.printArray(arr,6);
    // s1.printArray(brr,5);
   

    return 0;

}