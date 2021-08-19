#include<iostream>
using namespace std;


// check palindrome

bool isPalindrome(char arr[], int n) {

    int i=0; 
    while (arr[i] != '\0') {
        i += 1;
    }
    int st =0, end = i-1;
    while (st <= end) {
        if (arr[st] == arr[end]) {
            st += 1;
            end -= 1;
        }else {
            return false;
        }
    }
    return true;

}

int maxLength(char arr[]) {
    int i = 0;
    int currLength = 0, 
        maxLength = 0;

    while (1) {
        if(arr[i] == ' ' || arr[i] == '\0') {
            if (currLength > maxLength) {
                maxLength = currLength;
            }
            currLength = 0;
        }
        else {
        currLength += 1;
        }
        if (arr[i] == '\0') {
            break;
        }
        i+=1;
    }
    return maxLength;
}

int main() {
    
    int n;
    cin>>n;

    cin.ignore();
    char arr[n+1];
    cin.getline(arr, n);
    cin.ignore();

    // cout<<isPalindrome(arr, 100)<<endl;
    cout<<maxLength(arr, n)<<endl;

    return 0;
}