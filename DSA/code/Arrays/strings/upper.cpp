#include<bits/stdc++.h>
using namespace std;


int main() {

    string str = "asdfghjkl";
    cout<<'a'-'A'<<endl;

    // //uppercase
    // for (int i=0; i<str.size(); i++) {
    //     if(str[i] >= 'a' && str[i] <= 'z'){
    //         str[i] -= 32;
    //     }
    // }

    // cout<<str<<endl;

    // //lowercase
    // for(int i=0; i<str.size(); i++) {
    //     if (str[i]>='A' && str[i] <= 'Z') {
    //         str[i] += 32;
    //     }
    // }

    // cout<<str<<endl;

    string s= "helLooasdfADF";
    transform(s.begin(), s.end(), s.begin(), ::toupper);
    cout<<s<<endl;
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    cout<<s<<endl;

    return 0;
}