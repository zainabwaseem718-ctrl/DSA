#include<iostream>
using namespace std;
int main(){

    int arr1[100],arr2[100],merge[200];
    int n1,n2;
    cout<<"Enter the size of Array 1 : ";
    cin>>n1;
    cout<<"Enter the Elements of Array 1 : ";
    for(int i=0;i<n1;i++){
        cin>>arr1[i];
    }
     cout<<"Enter the size of Array 2 : ";
     cin>>n2;
     cout<<"Enter the Elements of Array 2 : ";
    for(int i=0;i<n2;i++){
        cin>>arr2[i];
    }
    //copy 1st array

    for(int i=0;i<n1;i++){
        merge[i]=arr1[i];
    }
    //copy 2nd array
    for(int i=0;i<n2;i++){
        merge[n1+i]=arr2[i];
    }
    //merge both arrays
    for(int i=0;i<n1+n2;i++){
        cout<<merge[i]<<" ";
    }

    return 0;
}