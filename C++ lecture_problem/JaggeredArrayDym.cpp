// #include<iostream>
// using namespace std;

// int main(){
//     // int n;
//     // cin >> n;
//     int arr[4] = {1,2,3,4};
//     int* arr = new int [4];
//     // for(int i=0; i<n; i++){
//     //     cin >> arr[i];}
    
//     cout << endl;
//     for(int i=0; i<4; i++){
//         cout << arr[i];
//     }
//     delete []arr;
//     return 0;
    
// }

// C++ program to demonstrate how to dynamically allocate
// array
#include <iostream>
using namespace std;

int main()
{
    // Take array size as input from user
    cout << "Enter the size of the array: ";
    int size;
    cin >> size;

    // Dynamically allocate an array
    int* arr = new int[size];

    // Assign values to the array elements
    for (int i = 0; i < size; i++) {
        cin >> arr[i] ;
    }

    // Print the array elements
    cout << "Elements of the array are: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Deallocate the memory
    delete[] arr;

    return 0;
}


