#include<bits/stdc++.h>
using namespace std;


int firstRepeating(int arr[], int n) {

    //setting a very large size for the array. Making it a constant
    const int N = 1e5+2;
    int idx[N];

    //initializing the array of indices
    for(int i=0; i<N; i++) {
        idx[i] = -1;
    }

    int min_idx = INT_MAX;


    //update the idx array. idx[arr[j]] = j
    for(int j=0; j<n; j++) {
        
        if(idx[arr[j]] != -1) {
            min_idx = min(min_idx, idx[arr[j]]);
        }else {
            idx[arr[j]] = j;
        }

    }

    if(min_idx == INT_MAX) {
        return -1;
    }
    
    return min_idx;

}

int main() {

    int n;
    cin>>n;

    int arr[n];
    for(int i=0; i<n; i++) {
        cin>>arr[i];
    }

    cout<<firstRepeating(arr, n)<<endl;

    return 0;
}