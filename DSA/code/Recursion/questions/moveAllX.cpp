#include<iostream>
using namespace std;

string moveX(string s){
    if (s.length() == 0){
        return "";
    }

    string ans = moveX(s.substr(1));
    char c = s[0];
    if (c=='x'){
        return ans + c;
    }
    return c+ans;

}

int main(){
    string s= "axxbdxcefxhix";
    cout<<moveX(s)<<endl;
    return 0;
}