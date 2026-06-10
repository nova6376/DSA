#include<iostream>
using namespace std;
int TargetEle(int arr[], int key, int n){
    // base case 
    if(n == 0){
        cout << "not found "<< endl;
        return 0;
    }
    if(arr[0] == key){
        cout << endl;
        cout << "found" << endl;
        return 1;
    }

    // recursive relation
    TargetEle(arr + 1,key,n - 1);

}

int main(){
    int arr[5] = {1,2,3,4,5};
    int ans = TargetEle(arr,6, 5);
    cout << endl ;
    cout << ans ;
    return 0;

}