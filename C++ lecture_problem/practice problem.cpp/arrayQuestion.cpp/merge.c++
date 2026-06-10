#include <iostream>
using namespace std;

void merge(int arr1[],int n,int arr2[],int m){
    int i=0, j=0; 
    while(i<n && j<m){
        if (arr1[i]<arr2[j]){
        arr1[i]=arr1[i];
        i++;}
        else {
        arr1[i+1]=arr1[i];
        arr1[i]=arr2[j];
         j++;
        }
    }
    
    // copy first array k element ko 
     while(i<n){
        arr1[i];
        i++;
    }
    // copy second array k element ko
     while(j<m){
        arr1[i]=arr2[j];
         j++;
    }

   } 

    
void print(int ans[],int n){
    for(int i= 0; i<n; i++){
        cout << ans[i] << " ";
    }
    cout << endl;
}

int main(){
    int arr1[7]={1,3,5,6,7, };
    int arr2[3]={2,4,9};

    merge(arr1,7,arr2,2);

    print(arr1,7);
    return 0;
}
  

 // //  

// void merge(int arr1[],int n,int arr2[],int m,int arr3[]){
//     int i=0,j=0;
//     int k=0;
//     while (i<n && j<m){
//         if(arr1[i]<arr2[j])
//         arr3[k++]=arr1[i++];
//         else
//         arr3[k++]=arr2[j++];
//     }
//     while(i<n){
//         arr3[k++]=arr1[i++];
//     }
//     while(j<m){
//         arr3[k++]=arr2[j++];
//     }
// }
// void print(int ans[],int n){
//     for(int i= 0; i<n; i++){
//         cout << ans[i] << " ";
//     }
//     cout << endl;
// }

// int main(){
//     int arr1[3]={2,3,6};
//     int arr2[4]={1,4,5,7};
//     int arr3[7];

//     merge(arr1,3,arr2,4,arr3);

//     print(arr3,8);
//     return 0;
    
// }
//  print(arr3,n);

// }
//    void printMergeArray(int arr1[],int n,int arr2[],int m,int arr3[],int k){
//       for( int i=0;i<n;i++){
//         cout << arr1[i] << endl;}
//       for( int j=0;j<m;j++){
//        cout << arr2[j] << endl;}
//       for( int k=0; k < n+m; k++){
//        cout<< arr3[k] << endl;
//       }
   