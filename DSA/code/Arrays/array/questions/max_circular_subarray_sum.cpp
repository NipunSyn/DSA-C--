#include<bits/stdc++.h>
using namespace std;


int kadane(int arr[], int n) {
    int maxSum = INT_MIN;
    int currentSum = 0;
    for(int i=0; i<n; i++) {
        currentSum += arr[i];
        if(currentSum <0) {
            currentSum = 0;
        }
        maxSum = max(maxSum, currentSum);
    }
    return maxSum;
}


int circularSum(int arr[], int n) {

    //logic: maxSubSum = total sum of array - sum of non-contributing elements
    //reverse sign, apply Kadane's algo

    int wrapsum;
    int nonwrapsum;

    //case 1, nonwrap give max
    nonwrapsum = kadane(arr, n);

    //case 2, wrapped give max
    int totalSum = 0;
    for (int i=0; i<n; i++) {
        totalSum += arr[i];
        arr[i] = arr[i] * (-1);
    }

    wrapsum = totalSum + kadane(arr, n);

    return max(wrapsum, nonwrapsum);

}


int main() {

    int n;
    cin>>n;

    int arr[n];
    for(int i=0; i<n; i++) {
        cin>>arr[i];
    }

    cout<<circularSum(arr, n)<<endl;

    return 0;
}