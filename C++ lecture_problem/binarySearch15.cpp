#include<iostream>
using namespace std;

int findLargestMinDistance(int arr, int k,int n){
    int s = 0;
    int sum = 0;
    for(int i=0; i<n; i++){
        sum+=arr[i];
    }
    int e = sum;
    int ans =-1;
    int mid = s + (e-s)/2;
    while(s<=e){
        if(isPossible(arr,k)){
            ans = mid;
            e = mid-1;
        }
        else{
            s = mid + 1;
        }
        mid = s + (e-s)/2;
    }

    return ans;
}
int isPossible(vector<int>& arr,int k,int mid){
    int painterCount = 1;
    int boardSum = 0;
    for(int i=0; i<n; i++){
        if(boardSum + arr[i] <= mid){
            boardSum+=arr[i];
        }
        else
        {
            painterCount++;
           if(studentCount>k || arr[i]>mid){
            return false;
           }
           boardSum = arr[i];
        }
    }
    return true;

}

int main(){
    arr[6] = {2,1,5,6,2,3};
    findLargestMinDistance(vector<int> &arr, int k,int n)

}

