// to find if the given value exists in the matrix
// catch: integers sorted in acending from l to r in row and t to b in column
// should not be O(N^2)

#include<iostream>
using namespace std;


int main() {

    int r,c,n;
    cin>>r>>c>>n;

    int arr[r][c];

    for (int i=0; i<r; i++) {
        for (int j=0; j< c; j++) {
            cin>>arr[i][j];
        }
    }

    int i=0, j =c-1;
    bool found = false;
    while (i<r && j>=0) {
        if(arr[i][j] == n) {
            found = true;
            break;
        }else if(arr[i][j] < n) {
            i += 1;
        }else {
            j -= 1;
        }
    }

    if (found) {
        cout<<"True"<<endl;
    }else {
        cout<<"False"<<endl;
    }

    return 0;
}