#include<iostream>
#include <math.h>
using namespace std;

int main() {
//     int a = 4;
//     int b = 6;

//     cout<< "a&b" << (a&b) <<endl;
//     cout<< "~a" << (~a) <<endl;
//     cout<< "a|b" << (a|b) <<endl;
//     cout<< "a^b" << (a^b) <<endl;


//     cout<<(17>>1)<<endl;
//     cout<<(17>>2)<<endl;
//     cout<<(19<<1)<<endl;
//     cout<<(21<<2)<<endl;

//     int i=7;
//     cout<<(++i)<<endl;
//     //8
//     cout<<(i++)<<endl;
//     //8,i=9 after this
//     cout<<(i--)<<endl;
//     //9,i=8
//     cout<<(--i)<<endl;
//     //7, i=7
    
//     return 0;


//decimal to binary 

    // int n;
    // cin>>n;

    // int ans=0;
    // int i=0;
    // while(n!=0){
    //     int bit=n&1;
    //     ans=(bit*pow(10,i))+ans;
    //     n=n>>1;
    //     i++;
    // }
    // cout<<"Answer is"<< ans<<endl;

//binary to decimal
   int n;
   cin>>n;

   int i=0, ans=0;
   while(n!=0){
    int digit = n%10;
    if(digit==1) {
        ans=ans+pow(2,i);

    }
    n=n/10;
    i++;
   }
   cout<<ans<<endl;

}


