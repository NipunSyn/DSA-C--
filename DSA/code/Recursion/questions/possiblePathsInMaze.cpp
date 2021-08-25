#include<iostream>
using namespace std;

int possiblePaths(int x, int y, int end){
    if (x == end-1 && y == end-1) {
        return 1;
    }

    if (x > end-1 || y > end-1){
        return 0;
    }

    int count = 0;

    return possiblePaths(x+1, y, end) + possiblePaths(x, y+1, end);
}


int main(){
    int n;
    cin>>n;

    cout<<possiblePaths(0, 0, n)<<endl;

    return 0;
}