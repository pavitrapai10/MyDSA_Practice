// #include <iostream>
// using namespace std;
// int main() {
//     //declare
//     int number[15];
//     cout<<"value at 10 index is "<<number[10]<<endl;

//     //initialising an array
//     int second[3]={2,4,5};
//     //accessing an element
//     cout<<"Value at 2 index "<<second[2]<<endl;
    
//     int third[15]={2,7,8};
//     int n=15;
//     cout<<endl;
//     for(int i=0;i<n;i++){
//         cout<<third[i]<<" ";
//     }
// //initialising all locations with 0
//     int fourth[10]={0};
//     n=10;
//     cout<<endl;
//     for(int i=0;i<n;i++){
//         cout<<fourth[i]<<" ";
//     }
    
//     //initialising all locations with 1 (not possible)
//      int fifth[10]={1};
//      cout<<endl;
//     n=10;
//     for(int i=0;i<n;i++){
//         cout<<fifth[i]<<" ";
//     }
    
//     cout<<endl<<"Everything is fine"<<endl;

//     return 0;
// }

//using function
// #include <iostream>
// using namespace std;

// void PrintArray(int arr[], int size){
//     cout<< "printing the array"<<endl;
//     //print the array
//     for(int i=0;i<size;i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<"printing done"<<endl;

// }
// int main(){
//     //declare
//     int number[15];
//     //accessing an array
//     cout<<"Value at 14 index"<<number[14]<<endl;
//     int second[3]={5,7,11};
//     cout<<"Value at 2 index"<< second[2]<<endl;
//     int third[15]={2,7};
//     int n=15;
//     PrintArray(third,15);

//     int fourth[10]={0};
//     n=10;
//     PrintArray(fourth,10);

//     int fifth[10]={1};
//     n=10;
//     PrintArray(fifth,10);
//     int fifthsize=sizeof(fifth)/sizeof(n);
//     cout<<"size of fifth is "<<fifthsize<<endl;

//     char ch[5]={'p','a','v','i'};
//     cout<<ch[3]<<endl;
//      cout<< "printing the array"<<endl;
//     //print the array
//     for(int i=0;i<5;i++){
//         cout<<ch[i]<<" ";
//     }
//     cout<<"printing done"<<endl;
//     double firstdouble[5];
//     float firstfloat[9];
//     bool firstbool[6];

//     cout<<endl<<"Everything is fine"<<endl;
// }


// #include <iostream>
// using namespace std;

// int getMin(int num[],int n){
//     int mini=INT_MAX;
//     for(int i=0;i<n;i++){
//         mini=min(mini,num[i]);
//         // if(num[i]<min){
//         //     min=num[i];
//         // }
//     }
//     //returning min
//     return mini;
// }
// int getMax(int num[],int n){
//     int max=INT_MIN;
//     for(int i=0;i<n;i++){
//         if(num[i]>max){
//             max=num[i];
//             //above 2 lines can be written in single predefined 
//             //function as maxi=max(maxi,num[i]) .....if we write
//             // lhs max as maxi to avoid confusion
//         }
//     }
//     //return max
//     return max;
// }

// int main(){
//     int size;
//     cin>>size;
//     int num[100];
//     //taking input in array
//     for(int i=0;i<size;i++){  
//         cin>>num[i];
    
//     }
//     cout<<"Maximum value is "<<getMax(num,size)<<endl;
//     cout<<"Minimum value is "<<getMin(num,size);
//     return 0;
// }


//scope in array
// #include <iostream>
// using namespace std;

// void update(int arr[], int n){
//     cout<< "Inside the function"<< endl;
//     //updating array's first element
//     arr[0]=120;
//     //printing the array
//     for(int i=0; i<3;i++){
//         cout<<arr[i]<<" ";

//     }
//     cout<<endl;
//     cout<<"Going back to main function";

// }
// int main() {
//     int arr[3]={1,2,3};
//     update(arr,3);

//     //printing the array
//     for(int i=0; i<3;i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
//     return 0;
// }



//hw yayyy logic baith gaya khudse !!!!
// #include <iostream>
// using namespace std;

// int getSum(int arr[], int n){
//     int sum=0;
//     for(int i=0; i<n;i++){
//         sum=sum+arr[i];
//     }
//     return sum;
   

// }
// int main(){
//     int size;
//     cin>>size;
//     //taking input in array
//     int arr[100];
//     for(int i=0;i<size;i++){
//         cin>> arr[i];
//     }
//     cout<<"Sum of Array is"<<getSum(arr,size)<<endl;

// }

//linear search
// #include <iostream>
// using namespace std;

// bool search(int arr[], int size, int key){
//     for(int i=0; i<size;i++){
//         if(arr[i]==key){
//            return 1;

//         }
    
//     }
//     return 0;

// }

// int main(){
//     int arr[10]= {5,7,-2,10,22,-2,0,5,22,1};
//     cout<<" Enter the element to search for"<<endl;
//     int key;
//     cin>>key;

//     bool found=search(arr,10,key);
//     if(found){
//         cout<<"Key is present"<<endl;

//     }
//     else{
//         cout<<"key is absent"<<endl;

//     }
//     return 0;
// }

// #include <iostream>
// using namespace std;

// void reverse(int arr[], int n){
//     int start=0;
//     int end=n-1;

//     while(start<=end) {
//         swap(arr[start],arr[end]);
//         start++;
//         end--;
//     }
// }
// void printArray(int arr[], int n){
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
// }

// int main() {
//     int arr[6]={1,3,9,0,5,3};
//     int brr[5]={2,4,6,8,1};

//     reverse(arr,6);
//     reverse(brr,5);

//     printArray(arr,6);
//     printArray(brr,5);

//     return 0;
// }

//binary search
// #include <iostream>
// using namespace std;

// int binarySearch(int arr[], int size, int key){
//     int start=0;
//     int end= size-1;
//     int mid= start + (end-start)/2;   //to avoid error out of int range we subtract value from big value
//                                          its same as (s+e)/2
//     while(start <= end){
//         if(arr[mid]==key){
//             return mid;

//         }
//         //go to rhs
//         if(key>arr[mid]){
//             start=mid+1;
//         }
//         else{
//             end=mid-1;
//         }
//         mid=start+(end-start)/2;
//     }
//     return -1;
// }


// int main() {
//     int even[6]={2,4,6,8,10,12};
//     int odd[5]= {3,7,11,15,19};

//     int evenIndex= binarySearch(even,6,12);

//     cout<<" Index of 12 is "<< evenIndex<<endl;

//     int oddIndex= binarySearch(odd,5, 15);

//     cout<< "Index of 15 is "<<oddIndex<<endl;
//     return 0;

// }

// #include <iostream>
// using namespace std;

// void printArray(int arr[], int n){
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }cout<<endl;
// }

// void swapAlternate(int arr[], int size) {
//     for(int i=0;i<size; i+=2){
//         if(i+1<size){
//             swap(arr[i],arr[i+1]);
//         }
//     }
// }
// int main() {
//     int even[8]={5,2,9,4,7,6,1,0};
//     int odd[5]={11,33,9,76,43};

//     swapAlternate(even, 8);
//     printArray(even,8);

//     cout<<endl;
//     swapAlternate(odd,5);
//     printArray(odd,5);
// }


// #include<iostream>
// using namespace std;

// void printArray(int arr[],int n){
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
// }


// void sortOne(int arr[], int n){
//     int left=0;
//     int right=n-1;

//     while(left<right){
//         while(arr[left]==0 && left<right){
//             left++;
//         }
//         while(arr[right]==1 && left<right){
//             right--;
//         }
//         //agar yaha pohoch gaye ho iska matlab
//         //arr[left]==1 and arr[right]==0
//         if(left<right){
//             swap(arr[left],arr[right]);
//             left++;
//             right--;
//         }

//     }

// }


// int main(){
//     int arr[8]={1,1,0,1,0,0,1,0};
//     sortOne(arr,8);
//     printArray(arr,8);

// }

// #include <iostream>
// using namespace std;

// int getPivot(int arr[], int n){
//     int s=0;
//     int e=n-1;
//     int mid=s+(e-s)/2;

//     while(s<e){
//         if(arr[mid]>=arr[0]){
//             s=mid+1;
//         }
//     else{
//         e=mid;
//     }
//     mid=s+(e-s)/2;
//     }
//     return s;
// }
// int main(){
//     int arr[6]={10,1,7,6,4,16};
//     cout<<"Pivot is "<<getPivot(arr,6)<<endl;

// }

//reverse an array
#include <iostream>
#include <vector>
using namespace std;

vector<int> reverse(vector<int> v){
    int s=0;
    int e=v.size()-1;
    while(s<=e){
        swap(v[s],v[e]);
        s++;
        e--;
    }
    return v;

}

void print(vector<int> v){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
int main(){
    vector<int>v;
    v.push_back(11);
    v.push_back(7);
    v.push_back(3);
    v.push_back(12);
    v.push_back(4);

    vector<int> ans=reverse(v);
    print(ans);


    return 0;

}