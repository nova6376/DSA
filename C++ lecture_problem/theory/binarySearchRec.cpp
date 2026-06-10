#include<iostream>
using namespace std; 

bool Binarysearch(int arr[],int s,int e,int key){
   
     /// base case 
    if(s>e){
        return false;
    } 
     int mid = s + (e-s)/2;
    if(arr[mid] == key){
        return -1;
    }
    
    /// processing 
    if(arr[mid] > key){
        return Binarysearch(arr,s,mid-1,key); 
    }
    else{
        return Binarysearch(arr,mid+1,e,key);
    }
}
int main(){
    int arr[5] = {1,2,3,4,5};
    int size = 5;
    //int ans = 
    cout << Binarysearch(arr,0,5,10) << endl;
    return 0;
}