#include<iostream>
#include<string>
#include<algorithm>
using namespace std;



int main() {

    // //!declare a string
    // string str;

    // //!input and output
    // cin>>str;
    // cout<<str;

    // //!string of a particular type
    // string str1(5, 'n');
    // cout<<str1<<endl;

    // //!input with spaces
    // string str;
    // getline(cin, str);
    // cout<<str<<endl;

    // //!concatination
    // string s1 = "fam";
    // string s2 = "ily";

    // //!cout<<s1 + s2<<endl;
    // cout<<s1.append(s2)<<endl;

    // //!accessing character from string
    // string s1 = "lovely string";
    // cout<<s1[7]<<endl;

    // //!clear 
    // string abc = "kuch bhi likh de gibberish";
    // abc.clear();
    // cout<<abc<<endl;

    // //!comparison
    // string s1 = "abc";
    // string s2 = "xyz";

    // cout <<s1.compare(s1)<<endl; //-1: less, 0: equal, 1:greater

    // //!empty
    // string s1 = "abc";
    // cout<<s1.empty()<<endl;
    // s1.clear();
    // cout<<s1.empty()<<endl;

    // //!erase (to delete an element (or group of) at a specific position)
    // string s1 = "nincompoop";
    // s1.erase(3, 3); //startIndex, how Many Chars to delete
    // cout<<s1<<endl;
    // return 0;

    // //!find
    // string s1 = "hellooooo";
    // cout<<s1.find("e")<<endl;

    // //!insert
    // string s1 = "nincompoop";
    // s1.insert(3, "lol");
    // cout<<s1<<endl;

    // //!length
    // string s1 = "hellopoeopa";
    // cout<<s1.size()<<endl;
    // cout<<s1.length()<<endl;
    // for (int i=0; i<s1.length(); i++) {
    //     cout<<s1[i]<<" ";
    // }

    // //!substring
    // string s1= "yaar pata nahi";
    // string s2 = s1.substr(5, 4);
    // cout<<s2<<endl;

    // //!string to integer and vice versa
    // string s1 = "786";
    // int x = stoi(s1);
    // cout<<x+2<<endl;

    // int y = 786;
    // string s2 = to_string(y);
    // cout<<s2+"2"<<endl;

    //!sorting strings
    string s1 = "asdfasdf";
    sort(s1.begin(), s1.end());
    cout<<s1<<endl;
}