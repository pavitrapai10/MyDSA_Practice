// #include <iostream>
// #include<array>
// using namespace std;

// int main(){
//     int basic[3]={1,2,3};
//     array<int,4>a ={1,2,3,4};
//     int size=a.size();
//     for (int i=0;i<size;i++){
//         cout<<a[i]<<endl;
//     }
//    cout<<"Element at 2nd index "<<a.at(2)<<endl;
//    cout<<"Empty or not "<<a.empty()<<endl;

//    cout<<"First Element "<<a.front()<<endl;
//    cout<<"Last Element" <<a.back()<<endl;
// }


// #include <iostream>
// #include<vector>
// using namespace std;

// int main(){
//     vector<int>  v;
//     vector<int> a(5,1);
//     vector<int> last(a);
//     cout<<"print last"<<endl;
//     for(int i:last){
//         cout<<i<<" ";
//     }

//     cout<<"size "<<v.capacity()<<endl;  //size doubles and when size is in capacity it returns same size.
//     v.push_back(4);
//     cout<<"Size"<<v.capacity()<<endl;
//     v.push_back(2);
//     cout<<"size"<<v.capacity()<<endl;
//     v.push_back(3);
//     cout<<"size"<<v.capacity()<<endl;
//     v.push_back(3);
//     cout<<"size"<<v.capacity()<<endl;
//     v.push_back(6);
//     cout<<"size"<<v.capacity()<<endl;

//     cout<<"Element at 2nd index"<<v.at(2)<<endl;
//     cout<<"Front"<<v.front()<<endl;
//     cout<<"Back"<<v.back( )<<endl;
//     cout<<"before pop"<<endl;
//     for(int i:v){
//         cout<<i<<" ";
//         }cout<<endl;

//         v.pop_back();
    
   
//     cout<<"after pop"<<endl;
//     for(int i:v){
//         cout<<i<<" ";
//     }
//     //vector ka size 0 hoti hai capacity nahi
//     //size is kitne element vector k andar pade hai, capacity means kitni memory vector ko assigned hai
//     cout<<"before clear size"<<v.size()<<endl;
//     v.clear();
//     cout<<"after clear size"<<v.size()<<endl;
    
// }


// #include <iostream>
// #include<deque>
// using namespace std;
// int main() {
//     deque<int> d;
// d.push_front(3);
// d.push_back(2);

// // for(int i:d){
// //     cout<<i<<" ";

// // }
// // d.pop_front();
// // cout<<endl;
// // for(int i:d){
// //     cout<<i<<" ";

// // }
// cout<<endl;
// cout<<"print first index element" <<d.at(1)<<endl; 
// //first index means 0th index is 3, 1st index is 2

// cout<<"front"<<d.front()<<endl;
// cout<<"back"<<d.back()<<endl;
// cout<<"empty or not"<<d.empty()<<endl;

// cout<<"before erase"<<d.size()<<endl;
// d.erase(d.begin(),d.begin()+2);
// cout<<"after erase"<<d.size()<<endl;
// cout<<"empty or not"<<d.empty()<<endl;
// //size becomes 0 after erase but max size which is allocated in beginning to deque remains unchanged
// }
//time complexity of all is o(1), tc for erase would be o(n)

// #include <iostream>
// #include <list>
// using namespace std;

// int main(){
    
//     list<int>l;
//     list<int> n(5,100);
//     cout<<"Printing new"<<endl;
//     for(int i:n){
//         cout<<i<<" ";
//     }cout<<endl;
//     l.push_back(4);
//     l.push_front(2);
//     for(int i:l){
//         cout<<i<<" ";
//     }
//     cout<<endl;
//     l.erase(l.begin());
//     cout<<"after erase"<<endl;
//     for(int i:l){
//         cout<<i<<" ";
//     }
//     cout<<endl;
//     cout<<"size of list "<<l.size()<<endl;
// }

// #include <iostream>
// #include<stack>  //lifo
// using namespace std;

// int main(){
//     stack<string>s;
//     s.push("Pavitra");
//     s.push("Dinesh");
//     s.push("Pai");
//     cout<<"top element "<<s.top()<<endl;
//     s.pop();
//     cout<<"Now top element is "<<s.top()<<endl;
//     cout<<"Size of Stack "<<s.size()<<endl;
//     cout<<"Empty or not"<<s.empty()<<endl;
// }

// #include <iostream>
// #include <queue> //fifo
// using namespace std;
// int main() {

//     queue<string> q;
//     q.push("Pavitra");
//     q.push("Dinesh");
//     q.push("Pai");
//     cout<<" First Element"<<q.front()<<endl;
//     q.pop();
//     cout<<" First element now"<<q.front()<<endl;
//     cout<<"size"<<q.size()<<endl;
// }

//imp
//priority queue - first element is always greatest similar to max heap
//maxheap- default priority queue, 2 methods to fetch elements is max and min heap
// #include <iostream>
// #include<queue>
// using namespace std;
// int main(){
//     //max heap
//     priority_queue<int> maxi;

//     //min heap
//     priority_queue<int,vector<int>,greater<int>>mini;

//     maxi.push(1);  //max heap returns elements in ascending order
//     maxi.push(3);
//     maxi.push(2);
//     maxi.push(0);
//     int n=maxi.size();
//     for(int i=0; i<n;i++){
//         cout<<maxi.top()<<" ";
//         maxi.pop();

//     }cout<<endl;

//     mini.push(5);   //min heap returns elements in descending order
//     mini.push(3);
//     mini.push(2);
//     mini.push(0);
//     int m=mini.size();
//     for(int i=0; i<m;i++){
//         cout<<mini.top()<<" ";
//         mini.pop(); //all elements in mini removed
        

//     }cout<<endl;
//     cout<<"Empty or not"<<mini.empty()<<endl; //returns 1- true for empty

// }


//set stores all unique elements, if we put 5 times 5 still it stores only 1 time 5
//implemented behind the scenes using bst(binary search tree)
//u can't modify once initialised, either put or delete
//u will get elements in sorted order, unordered set is fasterthan set and its random not sorted like set
// #include <iostream>
// #include <set>
// using namespace std;
// int main() {
//     set<int> s;
//     s.insert(5);
//     s.insert(8);
//     s.insert(3);
//     s.insert(0);
//     s.insert(3);

//     for(auto i :s){
//         cout<<i<<endl;
//     }
//     set<int> ::iterator pipu=s.begin();
//     pipu++;
//     s.erase(pipu);
//     for(auto i:s){
//         cout<<i<<endl;
//     }cout<<endl;

//     cout<<"5 is present or not "<<s.count(5)<<endl;
//     set<int>:: iterator itr=s.find(5);
//     for(auto it=itr;it!=s.end();it++){
//         cout<<*it<<" ";
//     }cout<<endl;

//     //time complexity of insert, find, erase, count is Olog(n)
//     //size,begin,empty is O(1)

// }

//map stores data in key value form, all keys unique and one key will  point to one value only
// #include <iostream>  //map returns key in sorted order, unordered map returns randomly
// #include <map>       
// using namespace std;
// int main(){
//     map<int, string> m;
//     m[1]="babbar";   //where 1 is key, babbar is value
//     m[2]="love";
//     m[13]="kumar";

//     //another way to store in map
//     m.insert({5,"bheem"});
//     cout<<"before erase"<<endl;
//     for(auto i:m){    //i:m means i belongs to m
//         cout<<i.first<<" "<<i.second<<endl;
//     }
//     cout<<"finding -13 ->"<<m.count(-13)<<endl;

//     m.erase(13);
//     cout<<"after erase"<<endl;
//     for(auto i:m){
//         cout<<i.first<<" "<<i.second<<endl;
//     }

//     auto it=m.find(5);
//     for(auto i=it;i!=m.end();i++){
//         cout<<(*i).first<<endl;
//     }
// }
// //time complexity of map is Olog(n) for find, insert, erase, count
// //tc for unordered map is O(1) its implemented by hash table and map by red flag tree or balance tree


//using stl algorithms for code like binary search
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
int main() {
    vector<int> v;
    v.push_back(1);
    v.push_back(3);
    v.push_back(6);
    v.push_back(7);

    cout<<"Finding 6->" <<binary_search(v.begin(),v.end(), 6)<<endl;
}