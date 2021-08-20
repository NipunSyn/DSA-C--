#include<bits/stdc++.h>
using namespace std;

int maxSubarraySum(int arr[], int n) {

    // initiate two variables, one to store the current max, and the other for the overall max
    int maxSum = 0; 
    int maxTotal = INT_MIN;
    
    for(int i=0; i<n; i++) {
        maxSum += arr[i];

        if(maxTotal < maxSum) {
            maxTotal = maxSum;
        }

        if (maxSum < 0) {
            maxSum = 0;
        }
    }

    return maxTotal;
    // 1 3 -4 5 6
}


int main() {

    int n;
    cin>>n;

    int arr[n];
    for (int i=0; i<n; i++) {
        cin>>arr[i];
    }

    cout<<maxSubarraySum(arr, n)<<endl;

    return 0;
}