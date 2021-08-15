#include<bits/stdc++.h>
using namespace std;


int binaryToDecimal(int n) {

    int ans = 0;
    int x = 0;

    while (n>0) {
        int last_digit = n%10;
        ans += pow(2, x) * last_digit;
        n /= 10;   
        x +=1;
    }

    return ans;

}

int octalToDecimal(int n) {
    int ans = 0;
    int x = 0;

    while (n>0) {
        int last_digit = n%10;
        ans += pow(8, x) * last_digit;
        n /= 10;
        x += 1;
    }
    return ans;
}

int hexadecimalToDecimal(string n) {
    int ans = 0;
    int x = 1;

    int s = n.size();

    for (int i=s-1; i>=0; i--) {
        if(n[i] >= '0' && n[i] <= '9') {
            ans += x*(n[i] - '0');
        }else if (n[i] >= 'A' && n[i] <='F'){
            ans += x*(n[i]-'A'+10);
        }
        x *= 16;
    }
    return ans;
}


int main() {

    string n;
    cin>>n;

    // cout<<binaryToDecimal(n)<<endl;
    // cout<<octalToDecimal(n)<<endl;
    cout<<hexadecimalToDecimal(n)<<endl;

    return 0;
}