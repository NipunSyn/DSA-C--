#include<bits/stdc++.h>
using namespace std;


int longestArithmetic(int arr[], int n) {

    int longest = 2;
    int prev_diff = arr[1] - arr[0];
    int j = 2;
    int current = 2;

    while (j<n) {
        if(prev_diff == arr[j] - arr[j-1]) {
            current += 1;
        }else {
            prev_diff = arr[j] - arr[j-1];
            current = 2;
        }
        longest = max(longest, current);
        j++;
    }

    return longest;

}


int main() {

    int n;
    cin>>n;

    int arr[n];
    for(int i=0; i<n; i++) {
        cin>>arr[i];
    }

    cout<<longestArithmetic(arr, n)<<endl;

    return 0;
}