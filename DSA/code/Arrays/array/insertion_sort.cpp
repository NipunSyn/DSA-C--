#include<bits/stdc++.h>
using namespace std;


void print(int array[], int size) {
    for(int i=0; i<size; i++) {
        cout<<array[i]<<" ";
    }
    cout<<endl;

    return;
}


int insertionSort(int array[], int size) {
    for (int i=1; i<size; i++) {
        int current = array[i];
        int j=i-1;
        while(array[j]>current && j>=0) {  
            array[j+1] = array[j];
            j--;
        }
        array[j+1] = current;
    }


    print(array, size);
    
}


int main() {

    int size;
    cin>>size;
    int array[size];

    for (int i=0; i<size; i++) {
        cin>>array[i];
    }

    insertionSort(array, size);

    return 0;
}