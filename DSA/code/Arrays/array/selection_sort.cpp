#include<bits/stdc++.h>
using namespace std;


void print(int array[], int size) {
    for(int i=0; i<size; i++) {
        cout<<array[i]<<" ";
    }
    cout<<endl;

    return;
}


int selectionSort(int array[], int size) {
    for (int i=0; i<size-1; i++) {
        for(int j=i+1; j<size; j++) {
            if (array[j] < array[i]) {
                int temp = array[j];
                array[j] = array[i];
                array[i] = temp;
            }
        }
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

    selectionSort(array, size);

    return 0;
}