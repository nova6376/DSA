#include <iostream>
using namespace std;

// Recursive function to find the first occurrence of key
int firstOccurrence(int arr[], int low, int high, int key) {
    if (low > high) return -1;

    int mid = low + (high - low) / 2;

    if (arr[mid] == key) {
        if (mid == 0 || arr[mid - 1] != key) return mid;
        return firstOccurrence(arr, low, mid - 1, key);
    } 
    else if (arr[mid] < key) {
        return firstOccurrence(arr, mid + 1, high, key);
    } 
    else {
        return firstOccurrence(arr, low, mid - 1, key);
    }
}

// Recursive function to find the last occurrence of key
int lastOccurrence(int arr[], int low, int high, int key) {
    if (low > high) return -1;

    int mid = low + (high - low) / 2;

    if (arr[mid] == key) {
        if (mid == high || arr[mid + 1] != key) return mid;
        return lastOccurrence(arr, mid + 1, high, key);
    } 
    else if (arr[mid] < key) {
        return lastOccurrence(arr, mid + 1, high, key);
    } 
    else {
        return lastOccurrence(arr, low, mid - 1, key);
    }
}

int main() {
    int arr[] = {2, 4, 10, 10, 10, 18, 20};
    int n = sizeof(arr) / sizeof(arr[0]);
    int key = 10;

    int first = firstOccurrence(arr, 0, n - 1, key);
    int last = lastOccurrence(arr, 0, n - 1, key);

    if (first != -1) {
        cout << "First Occurrence: " << first << endl;
        cout << "Last Occurrence: " << last << endl;
    } else {
        cout << "Element not found!" << endl;
    }

    return 0;
}
