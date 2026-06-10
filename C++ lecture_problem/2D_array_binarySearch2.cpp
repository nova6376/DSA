#include<iostream>
using namespace std;

bool searchMartix(int arr[][5],int m, int n, int target){
    int rowIndex = 0;
    int colIndex = n-1;

    while(rowIndex < m && colIndex >= 0){
        int element = arr[rowIndex][colIndex];
        if(element == target){
            return 1;
        }
        if(element < target){
            rowIndex++;
        }
        else{
            colIndex--;
        }
    }
    return 0;
}

int main(){
    int arr[5][5] = {{1,4,7,11,15},{2,5,8,12,19},{3,6,9,16,22},{10,13,14,17,24},{
        18,21,23,26,30}};

     for(int i=0;i<5;i++){
            for(int j=0;j<5;j++){
                cout << arr[i][j] << "   ";
            }
            cout << endl;
     }

     cout << searchMartix(arr,5,5,25);
}
