#include<iostream>
using namespace std;

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

    int arr[3][3] = {9,1,2,3,4,5,6,7,8};
     
    // int target = cin >> " ";
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
           cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    cout << " Target element is : " <<endl;   
    cout << isPresent(arr,0,3,3);
    return 0;
}