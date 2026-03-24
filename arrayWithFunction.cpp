#include<iostream>
using namespace std;

class arr{
public:

    void inputArray(int arr[], int size){
        cout<<"Enter array: ";
        for(int i=0;i<size;i++){
            cin>>arr[i];
        }
    }

    void printArray(int arr[], int size){
        for(int i=0;i<size;i++){
            cout<<arr[i]<<endl;
        }
    }

    void printSize(int size){
        cout<<"Size of array: "<<size<<endl;
    }
};

int main(){

    arr a1;

    int arr[10];

    a1.inputArray(arr,10);
    a1.printArray(arr,10);
    a1.printSize(10);

    return 0;
}