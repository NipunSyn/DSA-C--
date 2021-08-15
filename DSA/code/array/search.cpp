#include<bits/stdc++.h>
using namespace std;

// linear search
int linearSearch(int arr[], int n, int key) {
    for (int i=0; i<n; i++) {
        if(arr[i] == key) {
            return i;
        }
    }
    return -1;
}

// binary search (only for sorted array)
int binarySearch(int arr[], int right, int left, int key){
    int mid = (left + right) / 2;
    while (left <= right) {
        if (key == arr[mid]) {
            return mid;
        }else if (key < arr[mid]) {
            right = mid - 1;
            mid = (left + right) / 2;
        }else {
            left = mid + 1;
            mid = (left + right) / 2;
        }
    }
    return -1;
}


int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++) {
        cin>>arr[i];
    }

    int key;
    cin>>key;

    // cout<<linearSearch(arr, n, key)<<endl;
    cout<<binarySearch(arr, n-1, 0, key)<<endl;
    return 0;
}