#include<iostream>
using namespace std;

int main() {
    // int n;
    // cout << "Enter the value of n "<<endl;
    

    // cout<<'printing count from 1 to n'<<endl;
    // for(int a=0 , b=1 , c=2;a>=0 && b>=1 && c>=2;a--,b--,c--){
    //     cout<<a<<" "<<b<<" "<<c<<endl;
    // }


    // int n;
    // cin>>n;

    // int sum=0;
    // for(int i=1;i<=n;i++){
    //     sum=sum+i;
    
    // }
    // cout<<sum<<endl;

    // fibonacci series
    // int n=10;
    // int a=0;
    // int b=1;

    // cout<<a<<" "<<b<<" ";
    // for(int i=1;i<=n;i++){
    //     int next=a+b;
    //     cout<<next<<" ";
    //     a=b;
    //     b=next;
    // }


    //prime or not( break statement breaks loop )
    // int n;
    // cin>>n;

    // bool isPrime=1;
    // for(int i=2;i<n;i++){
    //     isPrime=0;
    //     break;
    // }

    // if(isPrime==0){
    //     cout<<"not prime"<<endl;

    // }
    // else
    // {
    //     cout<<"prime"<<endl;
    // }

    //continue keyword usage makes things after continue unreachable

    // for(int i=0;i<2;i++){
    //     cout<<"hi"<<endl;
    //     cout<<"hey"<<endl;
    //     cout<<"helloo are you there bro?"<<endl;
    //     continue;

    //     cout<<"reply please"<<endl;
    // }

    // for(int i=0;i<5;i++){
    //     for(int j=i;j<=5;j++){
    //         if(i+j==10){
    //             break;
    //         }
    //         cout<<i<<" "<<j<<endl;
    //     }
        
    // }

//     int n;
//     cin>>n;
//     for(int i=1;i<n;i++){
//         for(int j=i+1;j<n;j++){
//             for(int k=j+1;k<n;k++){
//                 cout<<i<<j<<k<<endl;

//             }
          
//         }
      
    
// }
// }
// #include <iostream>
// using namespace std;

// int firstOcc(int arr[], int n, int key){

//     int s=0, e=n-1;
//     int mid=s+(e-s)/2;
//     int ans=-1;
//     while(s<=e) {
    
//         if(arr[mid]==key){
//             ans=mid;
//             e=mid-1;

//         }
//         else if(key>arr[mid]){//right me jao
//             s=mid+1;

//         }
//         else if(key<arr[mid]){ //left mai jao
//             e=mid-1;

//         }

//         mid=s+(e-s)/2;
//     }
//     return ans;
// }
// int lastOcc(int arr[], int n, int key){

//     int s=0, e=n-1;
//     int mid=s+(e-s)/2;
//     int ans=-1;
//     while(s<=e) {
    
//         if(arr[mid]==key){
//             ans=mid;
//             s=mid+1;

//         }
//         else if(key>arr[mid]){//right me jao
//             s=mid+1;

//         }
//         else if(key<arr[mid]){ //left mai jao
//             e=mid-1;

//         }

//         mid=s+(e-s)/2;
//     }
//     return ans;
// }

// int main() {
//     int even[5]={1,2,3,3,5};
//     cout<<"First Occurence of 3 is at index"<<firstOcc(even,5,3)<<endl;
//     cout<<"Last Occurence of 3 is at index "<<lastOcc(even,5,3)<<endl;

//     return 0;
// }

#include<vector>
using namespace std;
int firstOcc(vector<int>& arr, int n, int key) {

    int s = 0, e = n-1;
    int mid = s + (e-s)/2;
    int ans = -1;
    while(s<=e) {

        if(arr[mid] == key){
            ans = mid;
            e = mid - 1;
        }
        else if(key > arr[mid]) {//Right me jao
            s = mid + 1;
        }
        else if(key < arr[mid]) {//left me jao
            e = mid - 1;
        }

        mid = s + (e-s)/2;
    }
    return ans;
}

int lastOcc(vector<int>& arr, int n, int key) {

    int s = 0, e = n-1;
    int mid = s + (e-s)/2;
    int ans = -1;
    while(s<=e) {

        if(arr[mid] == key){
            ans = mid;
            s = mid + 1;
        }
        else if(key > arr[mid]) {//Right me jao
            s = mid + 1;
        }
        else if(key < arr[mid]) {//left me jao
            e = mid - 1;
        }

        mid = s + (e-s)/2;
    }
    return ans;
}

pair<int, int> firstAndLastPosition(vector<int>& arr, int n, int k)
{
    pair<int,int> p;
    p.first = firstOcc(arr, n, k);
    p.second = lastOcc(arr, n, k);
    
    return p;
}