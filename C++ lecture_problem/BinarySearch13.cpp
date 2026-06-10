// // / first and last occurance

// #include<iostream>
// using namespace std;

// int First_Occ(int arr[],int n, int key){
//     int s = 0, e = n-1;
//     int mid = s + (e-s)/2;
//     int ans = -1;
//     while(s<=e){
//         if(arr[mid] == key){
//           ans = mid;
//           e = mid-1;
//         }
//         else if(arr[mid] > key){
//             e = mid - 1;
//         }
//         else if(arr[mid] < key){
//             s = mid + 1;
//         }
//         mid = s + (e-s)/2;
//     }
//     return ans;
// }

// int Last_Occ(int arr[], int n, int key){
//     int s = 0, e = n-1 ;
//     int mid = s + (e-s)/2;
//     int ans = -1;
//     while(e>=s){
//         if(arr[mid] == key){
//            ans = mid;
//            s = mid+1;
//         }
//         else if(arr[mid] > key){
//             e = mid - 1;
//         }
//         else if(arr[mid] < key){
//             s = mid + 1;
//         }
//         mid = s + (e-s)/2;
//     }
//     return ans;

// }
// int main(){
//     int arr[7] = {2,4,5,5,5,6,8};
//     // int res = First_Occ(arr,7,5);
//     // cout << res << endl;

//     cout << " First occurance of 5 " << First_Occ(arr,7,5) << endl;
//     cout << " Last occurance of 5 " << Last_Occ(arr,7,5) << endl;

//     int total_number_occ = Last_Occ(arr,7,5)-First_Occ(arr,7,5)+1;
//     cout << total_number_occ << endl;

//     return 0;

// }



// /// peak element in array ////

#include<iostream>
using namespace std;

int peakElement(int arr[],int n){
    int s=0,e=n-1;
    int mid = s + (e-s)/2;
    int ans;
    while(s<=e){
        if(arr[mid]>arr[mid-1] && arr[mid]>arr[mid+1]){
            ans = mid;
            
         }
         else if(arr[mid] < arr[mid-1]){
             e = mid - 1;
         }
         else if(arr[mid] < arr[mid+1]){
             s = mid ;
         }       
    }return ans;
}
int main(){

int arr[7] = {1,2,3,4,5,2,1};
cout << "peak element is " << peakElement(arr,7);
}



 ////  short trick  //// 

// int peakIndexInMountainArray(vector<int>& arr){
//     int s=0;
//     int e=srr.size()-1;
//     int mid = s + (e-s)/2;
//     while(s<=e){
//         if(arr[mid] < arr[mid+1]){
//             s = mid + 1;
//         }
//         else 
//         {
//             e = mid;
//         }
//         mid = s + (e-s)/2;
//     }
//     return s;
// }