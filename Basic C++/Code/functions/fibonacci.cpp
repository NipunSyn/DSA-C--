#include<iostream>
#include<math.h>
using namespace std;


void fib(int n) {
    int i=0, j=1;
    int next;

    for(int k =1; k<=n; k++) {
        cout<<i<<endl;
        next = i+j;
        i = j;
        j = next;
    }

    return;
}

int main() {

    int n;
    cin>>n;

    fib(n);

    return 0;
}