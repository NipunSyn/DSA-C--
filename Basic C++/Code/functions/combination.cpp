#include<iostream>
#include<math.h>
using namespace std;

int fact(int n) {
    int factorial = 1;
    for (int i=1; i<=n; i++) {
        factorial *= i;
    }
    return factorial;
}

int nCr(int n, int r) {

    return (fact(n)/(fact(n-r) * fact(r)));
}


int main() {

    int n, r;
    cin>>n>>r;

    cout<<nCr(n, r)<<endl;
    return 0;
}