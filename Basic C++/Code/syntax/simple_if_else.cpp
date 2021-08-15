#include<iostream>
using namespace std;


int main() {
    int a, b, c;
    cin>>a>>b>>c;

    if (a>b) {
        if(a>c) {
            cout<<"max: "<<a<<endl;
        }else{
            cout<<"max: "<<c<<endl;
        }
    }else {
        if(b>c) {
            cout<<"max: "<<b<<endl;
        }else{
            cout<<"max: "<<c<<endl;
        }
    }

    return 0;
}