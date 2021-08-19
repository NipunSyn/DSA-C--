#include<bits/stdc++.h>
using namespace std;


int recordBreaker(int arr[], int n) {

    if (n == 1) {
        return 1;
    }

    int recordDays = 0;
    int currentMax = -1;

    for (int i=0; i<n; i++) {
        if(arr[i] > currentMax && arr[i]>arr[i+1]) {
            recordDays += 1;
        }
        currentMax = max(currentMax, arr[i]);
    }
    return recordDays;

}


int main() {    

    int n;
    cin>>n;

    int arr[n+1];
    arr[n] = INT_MIN;
    for (int i=0; i<n; i++) {
        cin>>arr[i];
    }

    cout<<recordBreaker(arr, n)<<endl;

    return 0;
}