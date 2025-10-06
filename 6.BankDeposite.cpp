#include <iostream>
using namespace std;

int main()
{ int c=0;
float n,p;
cout<<"Qancha pul qoyasiz:"; cin>>n; 
cout<<"Necha foizlik:"; cin>>p;
p=p/100;
float d=n;
while(d<2*n){
    d=d*(1+p);
    c++;
    }
cout<<c<<"oy "<<d<<" so'm"<<endl;




}
