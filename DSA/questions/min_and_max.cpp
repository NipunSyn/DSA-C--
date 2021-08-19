#include<bits/stdc++.h>
using namespace std;

struct Pair{
    int min;
    int max;
};

struct Pair minAndMax(int arr[], int n) {

    struct Pair minmax;
    minmax.min = INT_MAX;
    minmax.max = INT_MIN;
    
    for (int i=0; i<n; i++) {
        minmax.min = min(minmax.min, arr[i]);
        minmax.max = max(minmax.max, arr[i]);
    }

    return minmax;

}


int main() {

    int n;
    cin>>n;
    int arr[n];

    for(int i=0; i<n; i++) {
        cin>>arr[i];
    }

    struct Pair minmax = minAndMax(arr, n);
    cout<<minmax.min<<" "<<minmax.max<<endl;


    return 0;
}