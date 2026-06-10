// #include<iostream>
// using namespace std;

// void selectionSort(int arr[],int n){

//     for(int i=0; i<n-1; i++){
//         int min = arr[i];
//         for(int j=i+1; j<n; j++){
//             if(arr[min] > arr[j]){
//                 min = arr[j];
//             }
//         }
//         swap(arr[min],arr[i]);
       
//     }
// }
 
// int main(){
//     int arr[5] = {5,3,4,1,2};
//     selectionSort(arr,5);
//     cout << endl;

//     for(int i=0; i<5; i++){
//         cout << arr[i] <<" ";
//     }cout << endl;
//     return 0;
// }

/// using recursion

#include<iostream>
using namespace std;

void selectionSort(int arr[],int i,int n){
    /// base case
    if(i >= n-1){
        return ;
    }
    int min = i;
    for(int j=i+1; j<n; j++){
      if(arr[min] > arr[j]){
        min = j;
      }
    }
    swap(arr[min],arr[i]);
    // recursion call
    selectionSort(arr,i+1,n);   
    
}
 
int main(){
    int arr[5] = {5,3,4,1,2};
    selectionSort(arr,0,5);
    for(int i=0; i<5; i++){
        cout << arr[i] <<" ";
    }
    return 0;
}
