#include<bits/stdc++.h>
using namespace std;


int main(){

    string s = "3436234678";
    sort(s.begin(), s.end(), greater<int>());
    cout<<s<<endl;

    return 0;
}