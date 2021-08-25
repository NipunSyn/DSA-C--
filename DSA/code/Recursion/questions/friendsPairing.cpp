#include<iostream>
using namespace std;

int friends(int n){
    if (n==0 || n==1 || n==2){
        return n;
    }

    return friends(n-1) + friends(n-2)*(n-1);
    //single(recursion for n-1)     //paired (pair one with n-1; recursion for rem n-2)
}

int main() {
    int n;
    cin>>n;

    cout<<friends(n)<<endl;

    return 0;
}