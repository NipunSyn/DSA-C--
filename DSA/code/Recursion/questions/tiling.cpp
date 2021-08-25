#include<iostream>
using namespace std;

// 2*n board and 2*1 tile
// find ways in which we can tile the board
// this is fucking fibonacci!!

int tile(int n){
    if(n==0){
        return 0;
    }
    if(n==1){
        return 1;
    }


    return tile(n-1) + tile(n-2);
}

int main() {

    int n;
    cin>>n;

    cout<<tile(n)<<endl;

    return 0;
}