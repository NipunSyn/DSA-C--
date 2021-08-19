#include<bits/stdc++.h>
using namespace std;


int kthSmallest(int arr[], int n, int k){
    const int N = 1e6;
    bool check[N];
    for(int i=0; i<N; i++) {
        check[i] = false;
    }

    for(int i=0; i<n; i++) {
        check[arr[i]] = true;
    }

    int a = 0;
    for (int i=0; i<N; i++){
        if(check[i]) {
            a += 1;
        }
        if (a==(k)) {
            return i;
        }
    }
}


int main() {

    int n,k;
    cin>>n>>k;
    int arr[n];
    for (int i=0; i<n; i++) {
        cin>>arr[i];
    }

    cout<<kthSmallest(arr, n, k)<<endl;

    return 0;
}