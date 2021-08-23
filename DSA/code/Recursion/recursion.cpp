#include<bits/stdc++.h>
using namespace std;

int sumNum(int n) {
    if(n==1) {
        return n;
    }

    return n + sumNum(n-1);
}

int raisePower(int n, int p) {
    if (p == 0) {
        return 1;
    }

    return n*raisePower(n, p-1);
}

int factorial(int n) {
    if (n == 2) {
        return n;
    }

    return n * factorial(n-1);
}

int fib(int n) {
    if (n ==1) {
        return 0;
    }
    if (n ==2 || n==3) {
        return 1;
    }

    return fib(n-1) + fib(n-2);
}

int main () {

    // int n, p;
    // cin>>n>>p;

    int n;
    cin>>n;

    // cout<<raisePower(n,p)<<endl;
    // cout<<sumNum(n)<<endl;
    // cout<<factorial(n)<<endl;
    cout<<fib(n)<<endl;

    return 0;
}