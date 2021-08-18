#include<bits/stdc++.h>
using namespace std;


bool pairSum(int arr[], int n, int k) {  //O(n) for sorted array

    int start=0;
    int end = n-1;

    while (start < end) {
        if (arr[start] + arr[end] == k) {
            cout<<start<<" "<<end<<endl;
            return true;
        }
        if (arr[start] + arr[end] < k) {
            start += 1;
        }else {
            end -= 1;
        }
    }

    return false;

}


int main() {
    int n, k;
    cin>>n>>k;

    int arr[n];
    for(int i=0; i<n; i++) {
        cin>>arr[i];
    }

    cout<<pairSum(arr, n, k)<<endl;
}