#include<bits/stdc++.h>
using namespace std;


int rotateByOne(int arr[], int n) {
    // 1 2 3 4 5
    // 5 1 2 3 4

    int temp = arr[n-1];
    int i = n-1;

    while (i>=0) {
        arr[i] = arr[i-1];
        i -= 1;
    }
    arr[0] = temp;
    for(int i=0; i<n; i++) {
        cout<<arr[i]<<" ";
    }
}


int main() {

    int n;
    cin>>n;

    int arr[n];

    for(int i=0; i<n; i++) {
        cin>>arr[i];
    }

    rotateByOne(arr, n);

    return 0;
}