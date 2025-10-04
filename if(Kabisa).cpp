//finding kabisa years 365 nad 366
//MuhsinJON Isaqjonov (if)


#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;// n soni kiritiladi
    while(true){
    
    if (n%4==0 && n%100!=0) cout<<"366"<<endl;
    else if (n%100==0 && n%400==0 ) cout<<"366"<<endl;
    else{cout<<"365"<<endl;}
    cin>>n;}


    }

    
