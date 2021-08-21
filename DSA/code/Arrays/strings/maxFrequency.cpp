#include<bits/stdc++.h>
using namespace std;


int main(){

    string s= "fasfhtttasdfwpeugh";
    int freq[26];
    for(int i=0; i<26; i++){
        freq[i] = 0;
    }
    for(int i=0; i<s.size(); i++) {
        freq[s[i] - 'a'] += 1; //important line
    }

    char ans;
    int maxFreq = 0;

    for(int i=0; i<26; i++){
        if(freq[i]>maxFreq){
            maxFreq = freq[i];
            ans = i + 'a';
        }
    }
    cout<<maxFreq<<": "<<ans<<endl;

    return 0;
}