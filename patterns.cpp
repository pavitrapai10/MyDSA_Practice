#include<iostream>
using namespace std;

int main() {
//star pattern
    // int n;
    // cin>>n;

    // int i=1;

    // while(i<=n) {

    //     int j =1;
    //     while(j<=n) {
    //         cout<<"*";
    //         j=j+1;
    //     }
    //         cout<<endl;
    //         i=i+1;

//111
//222 
//333 pattern where row is same
    // int n;
    // cin>>n;

    // int i=1;

    // while(i<=n) {

    //     int j=1;
    //     while(j<=n) {
    //         cout << i;
    //         j =j + 1;
    //     }
    //     cout<<endl;
    //     i = i + 1;
    // }


// 1234
//1234
//1234
//1234 pattern where column is same
    // int n;
    // cin >> n ;

    // int i = 1;

    // while(i<=n) {
    //     int j =1;
    //     while(j<=n) {
    //         cout<<j;
    //         j = j+ 1;
        
    //     }
    //     cout<< endl;
    //     i = i+ 1;
    // }

//same q as above only formula changed to print above q opposite
//  int n;
//     cin >> n ;

//     int i = 1;

//     while(i<=n) {
//         int j =1;
//         while(j<=n) {
//             cout<<n-j+1;
//             j = j+ 1;
        
//         }
//         cout<< endl;
//         i = i+ 1;
// }

// int n;
//     cin >> n;

//     int i=1;

//     while(i<=n) {
//         int j = 1;
//         while(j<=n) {
//             cout << (n-j+1);
//             j = j+1;
//         }
//         cout<< endl;
//         i=i+1;

//     }
// }

// int n;
// cin>>n;

// int i = 1;
// int count = 1;

//     while (i<=n) {
//          int j = 1;
//          while( j<=n) {

//             cout<< count <<" ";
//             count= count + 1;
//             j = j+ 1;

//         }
   
//     }
//     cout<< endl;
//     i = i+1;

     
     int n;
     cin>>n;
     
     int i=1;
     while(i<=n) {
        //print spaces
        int space=n-i;
        while(space) {
            cout<<" ";
            space=space--;

        }
        //print stars
        int j=1;
        while(j<=i){
            cout<<"i";
            j=j+1;
        }
        cout<<endl;
        i=i+1;

    }

}
    
        


