//Finding number entered
#include <iostream>
#include <string>
using namespace std;
int  Digit(int k,int n){
     int count=0;
     int t=k;
     while(k>0){
         k/=10;
         count++;}
    if(count<n) return -1;
    for (int i =1;i<=count-n;i++){
        t/=10;}
        return t%10;}

int main()
{int k,n;
cin>>k>>n;

cout<<Digit(k,n);
}
