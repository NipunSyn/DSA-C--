#include <iostream>
using namespace std;

struct Pair{
    int first;
    int last;
};

bool isSorted(int arr[], int index, int maxIndex) {
    if (index == maxIndex)  {
        return true;
    }

    if (arr[index] > arr[index + 1]) {
        return false;
    }

    return isSorted(arr, index+1, maxIndex);

}

int first(int arr[], int n, int i, int k) {
    if(i==n) {
        return -1;
    }

    if (arr[i] == k) {
        return i;
    }

    first(arr, n, i+1, k);

}

int last(int arr[], int n, int i, int k) {
    if(i==n) {
        return -1;
    }

    int rest = last(arr, n, i+1, k);
    if(rest != -1) {
        return rest;
    }   
    if(arr[i] == k) {
        return i;
    }
    return -1;
}

int main() {

    int n, k;
    cin>>n>>k;
    int arr[n];

    for(int i=0; i<n; i++) {
        cin>>arr[i];
    }

    cout<<first(arr, n-1, 0, k)<<endl;
    cout<<last(arr, n-1, 0, k)<<endl;
    // cout<<isSorted(arr, 0, n-1)<<endl;

    return 0;
}