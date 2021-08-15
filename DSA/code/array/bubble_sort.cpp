#include<bits/stdc++.h>
using namespace std;


void print(int array[], int size) {
    for(int i=0; i<size; i++) {
        cout<<array[i]<<" ";
    }
    cout<<endl;

    return;
}


int bubbleSort(int array[], int size) {
    int counter = 1;
    while(counter<size) {
        for (int i = 0; i<size-counter; i++) {
            if(array[i]>array[i+1]) {
                int temp = array[i];
                array[i] = array[i+1];
                array[i+1] = temp;
            }
        }
        counter +=1;
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

    bubbleSort(array, size);

    return 0;
}