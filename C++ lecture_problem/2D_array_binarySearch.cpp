#include<iostream>
using namespace std;

bool searchMatrix(int arr[][4],int m, int n,int target){
    int start = 0;
    int end = m*n - 1;

    int mid = start + (end-start)/2;
    while(start<end){
        int element = arr[mid/4][mid%4];
        if(element == target){
            return 1;
        }
        if(element < target){
            start = mid+1;
        }
        else{
            end = mid-1;
        }
        mid = start + (end - start)/2;
    }
     return false;
}

int main(){
    int arr[3][4] = {{1,2,3,4},{5,6,7,8},{9,10,11,12}};
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    cout << searchMatrix(arr,3,4,11) ;
    return 0;

}