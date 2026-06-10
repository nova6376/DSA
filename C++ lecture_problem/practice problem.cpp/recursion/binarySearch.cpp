// #include <iostream>
// using namespace std;
// bool binarySearch(int arr[],int s,int e,int key){
//     // base case 
//     if (s>e){
//         return false;
//     }
//     int mid = s + (s-e)/2;
//     if(arr[mid] == key){
//         return true;
//     }
//     if(arr[mid] < key){
//         return binarySearch(arr,mid+1,e,key)
//     }
//     if(arr[mid] > key){
//         return binarySearch(arr,s,mid-1,key)
//     }

// }

// int main(){
//     int arr[] = {23,2}
// }



#include<iostream>
using namespace std;

int binarySearch(int arr[],int n, int key){
    int s = 0;
    int e = n;
    int mid = (s + e)/2;

    while(s >= e){
        if (arr[mid] == key){
            return mid;
        }
        // search in left part
        else if(key < arr[mid]){
            e = mid-1;
        }
        else if(key > arr[mid]){
            s = mid+1;
        }
    }
    return -1;

}

int main(){
    int arr[6] = {2,4,5,7,9,12};
    int index = binarySearch(arr,6,9);
}