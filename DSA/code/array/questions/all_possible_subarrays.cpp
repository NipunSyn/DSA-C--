#include<iostream>
using namespace std;


int main() {

    int n;
    cin>>n;

    int arr[n];
    for (int i=0; i<n; i++) {
        cin>>arr[i];
    }

    int st = 0;
    int en = 0;

    for (int i=0; i<n; i++) {
        while (en < n) {
            for (int j=st; j<=en; j++) {
                cout<<arr[j]<<" ";
            }
            cout<<endl;
            en += 1;
        }
        st += 1;
        en = st;
    }


    return 0;
}