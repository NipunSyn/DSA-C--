#include <bits/stdc++.h>
using namespace std;

int minsumAnd(int arr[], int n) {
    int st=0,
        end=n-1,
        temp;
    
    while (st <= end) {
        if (arr[st] == arr[end]) {
            st += 1;
            end -=1;
        }else {
            temp = arr[st];
            arr[st] = arr[end];
            arr[end] = temp;
            end -= 1;
            st += 1;
        }
    }
    //10 1 20 1

    int sum;
    int minSum = INT_MAX;
    for (int i=0; i<n; i++) {
        sum = 0;
        for (int j=i; j<n; j++){
            sum += arr[i]&arr[j];
            minSum = min(minSum, sum);
        }
    }
    return minSum;
}


int main() {
    int n;
    cin>>n;

    int arr[n];
    for(int i=0; i<n; i++) {
        cin>>arr[i];
    }

    cout<<minsumAnd(arr, n)<<endl;

    return 0;
}