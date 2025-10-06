//Finding number and reminderwithout / and  %

#include <iostream>
using namespace std;

int main(){
    int n,m,c=0;
    cin>>n>>m;
    while(n>m){
        n=n-m;
        c++;}
    cout<<"n/m="<<c<<" Qoldiq:"<<n;
    

}
