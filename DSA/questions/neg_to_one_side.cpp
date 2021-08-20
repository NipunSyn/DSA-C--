#include<iostream>
using namespace std;


void negToOneSide(int arr[], int n) {

    int st=0,
        end=n-1,
        temp;
    
    while(st <= end) {

        // check if start is positive end is negative
        if (arr[st] > 0 && arr[end] < 0) {
            temp = arr[st];
            arr[st] = arr[end];
            arr[end] = temp;
            st += 1;
            end -= 1;
        //check if both start and end are negative
    }else if (arr[st] < 0 && arr[end] < 0){
        st += 1;
        //check if both start and end are positive
    }else if (arr[st] > 0 && arr[end] > 0){
        end -= 1;
        //for all other cases
    }else {
        st += 1;
        end -= 1;
    }

    }
    //-12 11 -13 -5 6 -7 5 -3 11

    for (int i=0; i<n; i++) {
            cout<<arr[i]<<" ";
        }
    return;
}

int main() {
    int n;
    cin>>n;

    int arr[n];
    for(int i=0; i<n; i++) {
        cin>>arr[i];
    }

    negToOneSide(arr, n);

}