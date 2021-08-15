#include<iostream>
using namespace std;


int main() {
   int a, b;
   char c;
   cin>>a>>c>>b;

    switch (c) {
        case '+':
            cout<<a+b<<endl;
            break;
        case '-':
            cout<<a-b<<endl;
            break;
        case '*':
            cout<<a*b<<endl;
            break;
        case '/':
            if(b!=0) {
                cout<<a/b<<endl;
            }else{
                cout<<"Denominator cannot be 0";
            }
            break;
        default:
            cout<<"Operator is not valid";
            break;
    }

    return 0;
}