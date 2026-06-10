#include <iostream>
using namespace std;

bool linearSearch(int arr[],int size,int key){
    // base case
    if (size == 0){
        return false;
    }
    if (arr[0] == key ){
        return true;
    }
    else {
        bool remainingPart(arr + 1,size - 1,key);
        return remainingPart;
    }
}
