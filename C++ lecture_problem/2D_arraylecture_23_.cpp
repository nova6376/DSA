#include<iostream>
using namespace std;

int largestSum(int arr[][3],int m,int n){
    int max = -1;
    int rowNum = -1;
    for(int i=0;i<m;i++){
        int sum = 0;
        for(int j=0;j<n;j++){
            sum = sum + arr[i][j];
           
        } 
        if (max < sum){
            max = sum;
            rowNum = m;
        }
    }    
    cout << endl;
    cout << max << endl;
    return rowNum; 
}

int RowWiseSum(int arr[][3],int m,int n){
   
    for(int i=0;i<m;i++){
        int sum = 0;
        for(int j=0;j<n;j++){
             sum = sum + arr[i][j];
        }
        cout << sum << " " ;
    }    
    cout << endl; 
}

bool isPresent(int arr[3][3],int key, int m,int n){
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if (arr[i][j] == key){
                return true;
            }
          
        }
    }
    return 0;
}

int main(){

    int arr[3][3] = {0,1,2,3,4,5,6,7,8};
     
    // int target = cin >> " ";
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
           cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    cout << " Row wise sum  is : " <<endl;   
    // cout << isPresent(arr,0,3,3) ;
    cout << endl;
    cout << RowWiseSum(arr,3,3);

    cout << largestSum(arr,3,3);
    return 0;
}