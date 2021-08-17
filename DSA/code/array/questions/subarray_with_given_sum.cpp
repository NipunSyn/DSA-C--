#include<bits/stdc++.h>
using namespace std;

// O(N^2)
// void givenSum(int arr[], int n, int req) {

//     int sum;
//     int i; 
//     int j;

//     for (i= 0; i<n; i++) {
//         sum = 0;
//         for (j=i; j<n; j++) {
//             sum += arr[j];
//             if(sum==req) {
//                 break;
//             }
//         }
//         if(sum == req) {
//             break;
//         }
//     }

//     cout<<i<<" "<<j<<endl;


//     return;
// }


// O(N)
void givenSum(int arr[], int n, int req) {
    
    int i=0,
        j=0,
        start=1,
        end=1,
        currentSum=0;
    
    while(j<n && currentSum+arr[j] <= req) {
        currentSum += arr[j];
        j++;
    }
    if(currentSum == req) {
        cout<<i<<" "<<j-1<<endl;
        return;
    }

    while(j<n) {
        currentSum += arr[j];
        while(currentSum > req) {
            currentSum -= arr[i];
            i++;
        }
        if(currentSum == req) {
            start = i;
            end = j;
            break;
        }
        j += 1;
    }

    cout<<start<<" "<<end<<endl;
}


int main() {

    int n;
    cin>>n;

    int s;
    cin>>s;

    int arr[n];
    for(int i=0; i<n; i++) {
        cin>>arr[i];
    }

    givenSum(arr, n, s);

    return 0;
}