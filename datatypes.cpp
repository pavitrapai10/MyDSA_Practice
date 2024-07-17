#include <iostream>
using namespace std;

int main() {
    int a =45;
    cout<<a<< endl;
    char b ='g';
    cout<< b <<endl;
    float c=78.98;
    cout<<c<<endl;
    bool k='true';
    cout <<k<<endl;
    double d=1.23;
    cout<< d <<endl;
    int size=sizeof(a);
    cout<<"size of variable is "<<size<<endl;
    int f='f';
    cout<<f<<endl;
    char ch=102;
    cout<<ch<<endl;
    char ch1=65433;
    cout<<ch1<<endl;
    double h=2.0/5;
    cout<<h<<endl;
    int pc=45;
    int dc=87;
    bool first=(pc==dc);
    cout<<first<<endl;
    bool second=(pc<dc);
    cout<<second<<endl;
    bool third=(pc>=dc);
    cout<<third<<endl;
    bool fourth=(pc!=dc);
    cout<<fourth<<endl;
    bool fifth=(pc<=dc);
    cout<<fifth<<endl;
    int j=0;
    cout<<!j<<endl; /*similarly for 1, 0 is printed*/
    int z=10,y=7,q=16;
    cout<<((z>y)&&(q>z)||(q<=20));
    



}
