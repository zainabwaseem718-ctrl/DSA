#include<iostream>
using namespace std;
int main(){

    int arr1[100],arr2[100];
    int merge[200];
    int n1,n2;
    int i=0,j=0,k=0;
    cout<<"Enter the size of Array 1 : ";
    cin>>n1;
    cout<<"Enter the Elements of Array 1 (Sorted) : ";
    for(int i=0;i<n1;i++){
        cin>>arr1[i];
    }
     cout<<"Enter the size of Array 2 : ";
     cin>>n2;
     cout<<"Enter the Elements of Array 2 (Sorted) : ";
    for(int i=0;i<n2;i++){
        cin>>arr2[i];
    }

    //Merge only sorted arrays
    while(i<n1 && j<n2){
        if(arr1[i]<arr2[j]){
            merge[k]=arr1[i];
            i++;
        }
        else{
            merge[k]=arr2[j];
            j++;
        }
        k++;
    }
while(i<n1){
    merge[k]=arr1[i];
    i++;
    k++;
}
while(j<n2){
    merge[k]=arr2[j];
    j++;
    k++;
}
cout<<"Merge Sorted Array"<<endl;
for(int x=0;x<k;x++){
    cout<<merge[x]<<" ";
}
    
cout<<endl;
    return 0;
}