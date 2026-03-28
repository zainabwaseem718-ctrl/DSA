#include<iostream>
using namespace std;
void printMatrix(int arr[][3], int r, int c){
    cout<<"In Function Matrix"<<endl;
    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}
int main(){
    int arr[3][3];
    int r=3,c=3;
    cout<<"Enter Elements for 3*3 Matrix : ";
     for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>>arr[i][j];
        }
    }
    cout<<"Matrix"<<endl;

    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    printMatrix(arr,r,c);

    return 0;
}
