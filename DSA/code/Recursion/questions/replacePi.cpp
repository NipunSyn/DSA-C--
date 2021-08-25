#include<iostream>
#include<string>
using namespace std;

void replacePi(string s){
    if(s.length() == 0){ //base case
        return;
    }
    if(s[0] == 'p' && s[1] == 'i'){
        cout<<"3.14";
        string ros = s.substr(2);
        replacePi(ros);
    }
    else{
        cout<<s[0];
        string ros = s.substr(1);
        replacePi(ros);
    }

    
} 


int main(){

    replacePi("pippppxxpip");

    return 0;
}