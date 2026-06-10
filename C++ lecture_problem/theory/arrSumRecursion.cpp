#include<iostream>
using namespace std;
int sum = 0;
int sumArray(int arr[],int n){
    
    
    if(n == 0){
        return 0;
    }
    // processing 
    sum = sum + arr[0];

    // recursion relation
    sumArray(arr + 1, n - 1);
    // cout  << sum << endl;
    return sum;
}

int main(){
    int arr[5] = {2,4,9,9,9};
    int ans = sumArray(arr,5);
    cout << ans << endl;

    return 0;
}