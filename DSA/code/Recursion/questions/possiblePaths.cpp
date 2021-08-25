#include<iostream>
using namespace std;

//steps range from 1 to 6 (dice)

int possiblePaths(int start, int end){
    // only one way
    if (start == end) {
        return 1;
    }

    // not possible 
    if (start > end) {
        return 0;
    }

    int count = 0;
    
    // for all possible die rolls, loop and check
    for(int i=1; i<=6; i++){

        count += possiblePaths(start+i, end);
    }

    return count;


}



int main() {

    int n;
    cin>>n;

    cout<<possiblePaths(0, n)<<endl;

    return 0;
}