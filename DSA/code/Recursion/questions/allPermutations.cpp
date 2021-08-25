#include<iostream>
using namespace std;


void permutation(string s, string ans){
    if(s.length() == 0){
        cout<<ans<<endl;
        return;
    }

    // loop through all the characters
    for(int i=0; i<s.length(); i++){

        char ch = s[i];
        string ros = s.substr(0, i) + s.substr(i+1); //to get the string up till and beyond our character
        permutation(ros, ans+ch);
    }
}

int main(){

    string s= "abc";
    permutation(s, "");
    return 0;
}