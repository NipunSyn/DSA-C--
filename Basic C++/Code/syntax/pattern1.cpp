#include<iostream>
using namespace std;


//hollow rectangle
// int main() {

//     int row, col;
//     cin>>row>>col;

//     for (int i=1; i<=row; i++) {
//         for(int j=1; j<=col; j++) {
//             if (i==1 || i == row) {
//                 cout<<"*";
//             }else if (j==1||j==col) {
//             cout<<"*";
//         }else {
//             cout<<" ";
//         }
//         }
//         cout <<endl;
//     }
//     return 0;
// }

//half pyramid 180 deg rotated

// int main() {

//     int row, column;
//     cin>>row>>column;

//     for (int i=1; i<=row; i++) {
//         int space = row - i;
//         for (int k=1; k<=space; k++) {
//             cout<<" ";
//         }
//         for (int j=1; j<=i; j++) {
//             cout <<"*";
//         }
//         cout<<endl;
//     }


//     return 0;
// }

// floyd's triangle
// int main() {

//     int row;
//     cin>>row;
//     int k = 1;

//     for (int i=1; i<=row; i++){
//         for(int j=1; j<=i; j++){
//             cout<<k<<" ";
//             ++k;
//         }
//         cout<<endl;
//     }

//     return 0;
// }


// butterfly pattern
int main() {
    int n;
    cin>>n;

    for (int i=1; i<=n; i++) {
        for (int j=1; j<=i; j++) {
            cout<<"*";
        }
        int space = 2*n - 2*i;
        for (int j=1; j<=space; j++) {
            cout<<" ";
        }
        for (int j=1; j<=i; j++) {
            cout<<"*";
        }
        cout <<endl;
    }
    
    for (int i=n; i>=1; i--) {
        for (int j=1; j<=i; j++) {
            cout<<"*";
        }
        int space = 2*n - 2*i;
        for (int j=1; j<=space; j++) {
            cout<<" ";
        }
        for (int j=1; j<=i; j++) {
            cout<<"*";
        }
        cout <<endl;

    }


    return 0;
}
