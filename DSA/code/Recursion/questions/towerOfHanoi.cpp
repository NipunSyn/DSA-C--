#include<iostream>
using namespace std;

//a source, b helper, c destination

void hanoi(int n, char src, char dest, char help){
    if(n==0){
        return;
    }

    hanoi(n-1, src, help, dest);
    cout<<"Move from "<<src<<" to "<<dest<<endl;
    hanoi(n-1, help, dest, src);

}


int main(){

    hanoi(3, 'A', 'C', 'B');
    return 0;
}