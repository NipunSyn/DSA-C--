#include<iostream>
using namespace std;


int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++) {
        cin>>arr[i];
    }

    //reverse an array method 1
    // int rev_arr[n];

    // for (int i=n-1; i>=0; i--) {
    //     int j = n-1-i;
    //     rev_arr[j] = arr[i];
    // }

    // for(int i=0; i<n; i++) {
    //     cout<<rev_arr[i]<<" ";
    // }

    //reverse an array method 2
    int temp;
    int st =0, end= n-1;
    while (st <= end) {
        temp = arr[st];
        arr[st] = arr[end];
        arr[end] = temp;
        st += 1;
        end -= 1;
    }
    for(int i=0; i<n; i++) {
        cout<<arr[i]<<" ";
    }

    return 0;
}