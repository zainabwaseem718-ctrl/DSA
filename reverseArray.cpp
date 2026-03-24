#include<iostream>
#include<algorithm>
using namespace std;

void printArray(int arr[], int size){
    for(int i=0; i<size; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

void reverseArray(int arr[], int size){
    int start = 0;
    int end = size - 1;

    while(start < end){
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

int main(){

    int arr[7] = {2,5,8,9,2,3,4};
    int brr[6] = {9,2,0,2,3,5};

    cout << "Original Arrays:" << endl;
    printArray(arr,7);
    printArray(brr,6);

    reverseArray(arr,7);
    reverseArray(brr,6);

    cout << "Reversed Arrays:" << endl;
    printArray(arr,7);
    printArray(brr,6);

    return 0;
}