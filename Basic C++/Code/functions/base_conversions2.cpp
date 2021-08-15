#include<bits/stdc++.h>
using namespace std;


int decimalToBinary(int n){
    int x = 1;
    int ans = 0;

    while (x<=n) {
        x *= 2;
    }
    x/=2;
    while (x>0) {
        int last_digit = n/x;
        n -= last_digit*x;
        x/=2;
        ans = ans*10 + last_digit;
    }
    return ans;
}

int decimalToOctal(int n){
    int x = 1;
    int ans = 0;

    while (x<=n) {
        x *= 8;
    }
    x/=8;
    while (x>0) {
        int last_digit = n/x;
        n -= last_digit*x;
        x/=8;
        ans = ans*10 + last_digit;
    }
    return ans;
}

string decimalToHexadecimal(int n) {
    int x = 1;
    string ans = "";
    while (x<=n) {
        x*=16;
    }
    x/=16;
    while (x>0) {
        int last_digit = n/x;
        n -= last_digit*x;
        x/=16;

        if (last_digit <=9) {
            ans += to_string(last_digit);
        }else {
            char c = 'A' + last_digit - 10;
            ans.push_back(c);
        }
    }
    return ans;
}

int main() {

    int n;
    cin>>n;

    // cout<<decimalToBinary(n)<<endl;
    // cout<<decimalToOctal(n)<<endl;
    cout<<decimalToHexadecimal(n)<<endl;
    return 0;
}