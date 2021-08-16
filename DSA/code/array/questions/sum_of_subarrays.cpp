#include<bits/stdc++.h>
using namespace std;

int sumOfSubarrays(int array[], int n) {

    int subsum;
    for (int i=0; i<n; i++) {
        subsum = 0;
        for(int j=i; j<n; j++) {
            subsum += array[j];
            cout<<subsum<<endl;
        }
    }

}


int main() {

    int n;
    cin>>n;

    int arr[n];

    for (int i=0; i<n; i++){
        cin>>arr[i];
    }
 
    sumOfSubarrays(arr, n);

    return 0;
}