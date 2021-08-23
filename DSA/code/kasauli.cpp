#include<bits/stdc++.h>
using namespace std;

int kasauli(int arr[], int n) {

    sort(arr, arr + n);

    int seats = 4,
        taxis = 1;
    
// 1 2 4 3 3
    int i=0;
    while (i<n) {
        if(arr[i] <= seats) {
            seats -= arr[i];
            i += 1;
        }
        else {
            taxis += 1;
            seats = 4;
        }
    }

    return taxis;

}


int main() {
    int n;
    cin>>n;

    int arr[5];
    for(int i=0; i<n; i++) {
        cin>>arr[i];
    }

    cout<<kasauli(arr, n)<<endl;

    return 0;
}