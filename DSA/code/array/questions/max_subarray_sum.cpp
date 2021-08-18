#include<bits/stdc++.h>
using namespace std;


int bruteForce(int arr[], int n) {

    int max_sum = INT_MIN;
    int sum;
    int st, en;

    for (int i=0; i<n; i++) {
        sum = 0;
        for (int j=i; j<n; j++) {
            sum += arr[j];
            if (sum > max_sum) {
                max_sum = sum;
                st = i;
                en = j;
            }
        }
    }

    for (int k=st; k<=en; k++) {
        cout<<arr[k]<<" ";
    }

}

// kadane's algorithm (should have positive inputs, else modify)

int kadane(int arr[], int n) {

    int currentSum = 0;
    int maxSum = INT_MIN;

    for (int i=0; i<n; i++) {
        currentSum += arr[i];
        if(currentSum<0) {
            currentSum = 0;
        }
        maxSum = max(maxSum, currentSum);
    }

    return maxSum;

}


int main() {

    int n;
    cin>>n;

    int arr[n];
    for (int i=0; i<n; i++) {
        cin>>arr[i];
    }

    // bruteForce(arr, n);
    cout<<kadane(arr,n)<<endl;

    return 0;
}