#include <iostream>
using namespace std;

// int factorial(int n) {
//     int fact =1;
//     for(int i=1; i<=n; i++){
//         fact=fact*i;
//     }
//     return fact;
// }
// int nCr(int n, int r){
//     int numerator= factorial(n);
//     int denominator=factorial(r)*factorial(n-r);
//     return numerator/denominator;
    
// }
// int main() {
//     int n,r;
//     cin>>n>>r;
//     cout<<"Answer is "<<nCr(n,r)<<endl;
// }



// void printCounting(int num){
//     //function body
//     for(int i=1; i<=num; i++){
//         cout<<i<<" ";

//     }
//     cout<<endl;
// }
// int main() {
//     int n;
//     cin>>n;
//     //function call
//     printCounting(n);

//     return 0;
// }


// bool isPrime(int n){
//     for(int i=2; i<n; i++) {
//         //divide hogaya hai means not prime
//         if(n%i==0){
//             return 0;
//         }

//     }
//     return 1;
// }
// int main() {
//     int n;
//     cin>>n;
//     if (isPrime(n)) {
//         cout<<" is prime no"<<endl;
    
    
//     }
//     cout<<"not prime"<<endl;
// }

// int power(){
//     int a,b;
//     cin>>a>>b;
//     int ans=1;
//     for(int i=1; i<=b; i++){
//         ans=ans*a;
//     }
//     return ans;
// }

// int main() {

//     int answer= power();
//     cout<<"Answer is "<<answer<<endl;
//     return 0;
// }

//1-> even
//0-> odd
// bool isEven(int a) {
//     //odd
//     if(a&1) {
//         return 0;
//     }
//     return 1; //even
// }
// int main() {
//     int num;
//     cin>>num;
//     if (isEven(num)) {
//         cout<<"Number is even "<<endl;

//     }
//     else{
//         cout<<"Number is odd"<<endl;
//     }


// }


//hw
// int isAP(int n){
//     int ap=3*n+7;
//     return ap;

// }
// int main() {
//     int n;
//     cin>>n;

//     int ans=isAP(n);
//     cout<<" Answer is"<<ans<<endl;
//     return 0;
    

// }

// int setBitsB(int b)
// {
//   int count = 0;
//   while(b!=0)
//   {
//     if(b&1)
//     {
//       count++;
//     }
//     b=b>>1;
//   }
//   return count; 
// }


// int setBitsA(int a)
// {
//   int count = 0;
//   while(a!=0)
//   {
//     if(a&1)
//     {
//       count++;
//     }
//     a=a>>1;
//   }
//   return count; 
// }

// int main()
// {
//   int a,b;
//   cin>>a>>b;
//   int ans1=setBitsA(a);
//   int ans2=setBitsB(b);
//   cout<<"Set bits of A="<<ans1<<endl;
//   cout<<"Set bits of B="<<ans2<<endl;
//   int ans=ans1+ans2;

//   cout<<"Total set bits of A and B are ="<<ans<<endl;

//   return 0;
// }

int fib(int n){
    int a=0;
    int b=1;
    for(int i=2;i<=n;i++){
        int next=a+b;
        a=b;
        b=next;

    }
    
    return b;
}
int main(){
    int n;
    cin>>n;

    cout<<"Fibonacci output is "<<fib(n)<<endl;
    return 0;
}
