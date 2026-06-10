#include<iostream>
using namespace std;
//  print like sine wave
int printArray(int arr[3][3], int m, int n){

  for(int j=0; j < m; j++){
    if(j&1){
     // odd index -> bottom to top 
      for (int i = n-1; i >= 0; i--)
      {
        cout << arr[i][j] << " ";
      }
    }
    else{
     // 0 or even index -> top to bottom
      for(int i = 0; i < n; i++){
        cout << arr[i][j] << " ";
      }
    }
  }
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
    cout << " Array is in sine wave : " <<endl;   
    cout << printArray(arr,3,3);
    return 0;
}  



// int even = 0,odd = 0;
//     for(int i=0;i<m;i++){
//         if(i/2 == 0){
//          int even = i;
//         }
//         else {
//           odd = i;
//         }
//         if(i = even){
//           for(int j=0;j<n;j++){
//             cout << arr[j];
//           }
//         }
//         else{
//             for(int j=n;j<0;j--){
//                 cout << arr[j];
//               }
//         }
//     }return 