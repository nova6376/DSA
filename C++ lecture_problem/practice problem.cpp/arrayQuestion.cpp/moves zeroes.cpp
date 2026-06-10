#include <iostream>
using namespace std;
void moveZero(vector<int>&nums){
   int nonezero=0;
   for(j=0;j<nums.size();j++){
    if (nums[j]!=0){
        swap(nums[j],nums[i]);
        i++;
    }
   }

}
print(){
    ans = moveZero(vector<int>)
    cout << ans << endl;
}
int main(){
   vector<int> v;
   v.arr
   moveZero(v);
    print();

return 0;

}




// void sortArray(int arr[],int n){
//     for(int i=n; i>0; i--){
//         for(int j=n-1; j>0; j--){
//             if (arr[j]==0 && arr[i]!=0)
//             swap(arr[j],arr[i]);
//             j++,i++;
//             // else

//         }
//     }
// }
// void print(int arr[],int n){
//     for(int i=0;i<n;i++){
//     cout << arr[i] << " " ;
//     cout << endl;}
// }


// int main(){
//     int arr[5]={0,1,0,2,0};

//     sortArray(arr,5);
//     print(arr,5);
//     return 0;
// }