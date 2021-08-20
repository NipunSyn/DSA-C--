#include<bits/stdc++.h>
using namespace std;

int unionSize(int arr1[], int arr2[], int n, int m) {
    set<int> s;

    for (int i=0; i<n; i++) {
        s.insert(arr1[i]);
    }
    for (int i=0; i<m; i++) {
        s.insert(arr2[i]);
    }

    return s.size();

}


int main(){
    int n, m;
    cin>>n>>m;
    int arr1[n], arr2[m];

    for (int i=0; i<n; i++) {
        cin>>arr1[i];
    }
    for (int i=0; i<m; i++) {
        cin>>arr2[i];
    }

    cout<<unionSize(arr1, arr2, n, m)<<endl;

    return 0;
}