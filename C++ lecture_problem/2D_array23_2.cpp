#include<iostream>
using namespace std;

void spiralOrder(int arr[][3],int m,int n){
    int count = 0;
    int total = m*n;

    /// index initialisation
    int startingRow = 0;
    int startingCol = 0;
    int endingRow = m-1;
    int endingCol = n-1;

    while(count < total){

        // print staring row
        for(int i = startingCol;count < total && i <= endingCol; i++){
            cout << arr[startingRow][i] << " ";
            count++; 
        }
        startingRow++;

        // print ending col 
        for(int i = startingRow;count < total && i <= endingRow; i++){
            cout << arr[i][endingCol] << " ";
            count++;
        }
        endingCol--;

        // print ending row
        for(int i = endingCol;count < total && i >= startingCol; i--){
            cout << arr[endingRow][i] << " ";
            count++;
        }
        endingRow--;

        // print starting col
        for(int i = endingRow;count < total && i >= startingRow; i--){
            cout << arr[i][startingCol] << " ";
            count++;
        }
        startingCol++;
    }
}

int main(){
    int arr[3][3] = {0,1,2,3,4,5,6,7,8};
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
           cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;

    spiralOrder(arr,3,3);
    return 0;
}