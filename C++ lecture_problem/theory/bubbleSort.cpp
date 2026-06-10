#include<iostream>
using namespace std;
void bubbleSort(int arr[], int n){
    // base case 
    if(n==0 || n == 1){
        return ;
    }
    for(int i=0;i<n;i++){
        int j = i+1;
        if(arr[i]>arr[j]){
            swap(arr[i],arr[j]);
        } 
    }
    bubbleSort(arr,n-1);
}
int main(){
    int arr[5] = {1,3,8,2,4};
    bubbleSort(arr,5);
    for(int i=0; i<5; i++){
        cout << arr[i] << " ";

    }
    return 0;
}