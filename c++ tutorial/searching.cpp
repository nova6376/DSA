#include<iostream>
using namespace std;
// int main(){
//  int arr[] = {1,2,3,4,5};
//  int N = sizeof(arr);
//  for (int i = 1;i<=N ; i++)
//  {
//     cout << "array elements"+ "%d",arr[i];
//  }
//  return 0;
// }

void printArray(int* arr , int n){
int i;
 cout << " Array :";
 for(i = 0; i < n; i++)
  {
    cout << arr[i] << " " ;

  }
}

int main()
{
    int arr[] = {1,2,3,4,5};
    int n = sizeof(arr) / sizeof(arr[0]);
    printArray(arr,n);
return 0;
}