#include<bits/stdc++.h>
using namespace std;


int maxTillI(int array[], int size) {
    int currentMax = INT_MIN;
    for(int i = 0; i<size; i++) {
        currentMax = max(currentMax, array[i]);
    }
    return currentMax;

}


int main() {

    int size;
    cin>>size;

    int arr[size];

    for(int i=0; i<size; i++) {
        cin>>arr[i];
    }

    cout<<maxTillI(arr, size)<<endl;

    return 0;
}