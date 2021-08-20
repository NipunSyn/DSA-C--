#include<iostream>
using namespace std;


void sort012(int arr[], int n) {
    int low = 0,
        mid = 0,
        high = n-1;
    int temp;

    while(mid <= high) {  
        switch (arr[mid]) {

            // when arr[mid] = 0
            case 0:
                temp = arr[mid];
                arr[mid] = arr[low];
                arr[low] = temp;
                low += 1;
                mid += 1;
                break;
            
            // when arr[mid] = 1
            case 1:
                mid += 1;
                break;
            
            // when arr[mid] = 2
            case 2:
                temp = arr[mid];
                arr[mid] = arr[high];
                arr[high] = temp;
                high -= 1;
                break;
            }

        }

        for (int i=0; i<n; i++) {
            cout<<arr[i]<<" ";
        }

        return;
    }


// 1 0 2 1 0 start
// 1 0 2 1 0 iter 1
// 0 1 2 1 0 iter 2
// 0 1 0 1 2 iter 3
// 0 0 1 1 2 iter 4

int main() {
    int n;
    cin>>n;

    int arr[n];
    for(int i=0; i<n; i++) {
        cin>>arr[i];
    }

    sort012(arr, n);

}