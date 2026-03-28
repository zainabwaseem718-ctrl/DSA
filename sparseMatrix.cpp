#include<iostream>
using namespace std;

int main(){
    int rows, cols;
    cout << "Enter rows and columns of matrix: ";
    cin >> rows >> cols;

    int mat[100][100]; // original matrix
    cout << "Enter matrix elements:\n";
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            cin >> mat[i][j];
        }
    }


    cout << "\nSparse Matrix (Triplet Form):\n";
    cout << "Row Col Value\n";
      for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            if(mat[i][j]!=0){
                cout<<i<<"  "<<j<<"  "<<mat[i][j]<<endl;

            }
        }
    }

    return 0;
    
}
