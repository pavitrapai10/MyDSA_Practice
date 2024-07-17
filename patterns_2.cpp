#include <iostream>
using namespace std;

int main() {
//     int n;
//     cin >> n;
//     int row = 1;

//     while( row<=n) {
//         int col = 1;
//         while( col<= row) {
//             cout<<"*";
//             col = col + 1;
//         }
//         cout<< endl;
//         row = row + 1;
//     }
// }

// int n;
// cin>>n;
// int row = 1;

//     while (row<=n) {
//     int col = 1;
//         while (col<=row){

//             cout<<row;
//             col = col + 1;
//         }
//         cout<< endl;
//         row = row+ 1;
//     }


    // int n;
    // cin>>n;

    // int i = 1;

    // while(i<=n) {


    //     int j=1;
    //     while(j<=i) {

    //         cout<< (i-j+1) << " ";
    //         j = j+1;
    //     }
    //     cout<<endl;
    //     i = i+1;
    // }


    // int n;
    // cin>>n;

    // int i = 1;
    // while(i<=n) {
    //     int j = 1;
    //     while(j<=n) {
    //         char ch = 'A' + i-1;
    //         cout<<ch;
    //         j=j+1;

    //     }
    //     cout<<endl;
    //     i=i+1;
    // }


    // int n;
    // cin>>n;

    // int i = 1;

    // while(i<=n) {
    //     int j = 1;
    //     while(j<=n) {
    //         char ch = 'A' + j - 1;
    //         cout<<ch;
    //         j = j+1;
    //     }
    //     cout<<endl;
    //     i = i+1;
    // }


    // int n;
    // cin>>n;

    // int i = 1;
    // char count = 'A';

    // while(i<=n) {
    //     int j = 1;
    //     while(j<=n) {

    //         cout<<count;
    //         count = count+1;

    //         j=j+1;
    //     }
    //     cout<<endl;
    //     i = i+1;
    // }


    // int n;
    // cin>>n;

    // int i=1;
    

    // while(i<=n) {
    //     int j = 1;
    //     while(j<=n) {
    
    //         char ch = 'A' + i+j-2;
    //         cout<<ch;
    //         j=j+1;
    //     }
    //     cout<<endl;
    //     i=i+1;
    // }

    // int n;
    // cin>>n;

    // int i =1;

    // while(i<=n) {
    //     int j=1;
    //     while(j<=i){
    //         char ch = 'A' + i-1;
    //         cout<<ch;
    //         j=j+1;
    //     }
    //     cout<<endl;
    //     i=i+1;
    // }

    // int n;
    // cin>>n;

    // int i=1;
    // char ch='A';

    // while(i<=n) {
    //     int j=1;
    //     while(j<=i) {
    //         cout<<ch;
    //         ch=ch+1;
    //         j=j+1;
    //     }
    //     cout<<endl;
    //     i=i+1;
    // }


    // int n;
    // cin>>n;

    // int i=1;
    // char ch='A';
    // while(i<=n) {
    //     int j=1;
    //     while(j<=i){
    //         ch='A'+i+j-2;
    //         cout<<ch;
    //         j=j+1;


    //     }
    //     cout<<endl;
    //     i=i+1;
    // }

    // int n;
    // cin>>n;
    
    // int i=1;
    // char ch='A';
    // while(i<=n) {
    //     int j=1;
    //     ch='A'+n-i;
    //     while(j<=i){
            
    //         cout<<ch;
    //         ch=ch+1;
    //         j=j+1;

    //     }
    //     cout<<endl;
    //     i=i+1;
    // }


    // int n;
    // cin>>n;

    // int i=1;
    // while(i<=n) {
    //     //print spaces
    //     int space=n-i;
    //     while(space) {
    //         cout<<" ";
    //         space=space-1;

    //     }
    //     //print stars
    //     int j=1;
    //     while(j<=i){
    //         cout<<"*";
    //         j=j+1;
    //     }
    //     cout<<endl;
    //     i=i+1;

    // }
    
    // int n;
    // cin>>n;


    // int i=1;
    // while(i<=n) {
    //     int j=1;
    //     while(j<=i) {
    //         cout<<'*';
    //         int no=n-i;
    //         j=j+1;
            
    //     }
    //     cout<<endl;
    //     i=i+1;
    // }

    // int n;
    // cin>>n;

    // int i=1;
    // while(i<=n) {
    //    int space=n-i;
    //    while(space) {
    //     cout<<" ";
    //     space=space-1;
    //     }
    //     int j=1;
    //     while(j<=i){
    //         int no=n-i+1;
    //         cout<<"*";
    //         j=j+1;
    //     }
    //     cout<<endl;
    //     i=i+1;
    //    }


    // int n;
    // cin>>n;

    // int i=1;
    // while(i<=n) {

    //     //print space(1st triangle)
    //     int space=n-i;
    //     while(space){
    //         cout<<" ";
    //         space=space-1;

    //     }
    //     //print 2nd triangle
    //     int j=1;
    //     while(j<=i){
    //         cout<<j;
    //         j=j+1;
    //     }
    //     //print 3rd triangle
    //     int start=i-1;
    //     while(start) {
    //         cout<<start;
    //         start=start-1;
    //     }
    //     cout<<endl;
    //     i=i+1;
       
    // }

    //dabangg pattern

    int n;
    cin>>n;

    int i=1;
    while(i<=n) {
        int j=1;
        while(j<=i){
            cout<<j;
            j=j+1;

        }
        //print stars
        int star=1;
        while(star){
            cout<<"*";
            star=star+1;

        }
        //print third triangle
        int start=n-i+1;
        while(start){
            cout<<"start";
            start=start+1;
        }
         cout<<endl;
         i=i+1;
        
    }
   
    


}
