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
void swapAlternate(int arr[],int size){
    for(int i=0;i<size;i+=2){
        if(i+1<size){
            swap(arr[i],arr[i+1]);
           
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
   s1.swapAlternate(arr,6);
    s1.swapAlternate(brr,5);
    cout<<"Array after swapping:"<<endl;
     s1.printArray(arr,6);
     s1.printArray(brr,5);
   

    return 0;

}