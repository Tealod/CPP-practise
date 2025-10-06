#include <iostream>
using namespace std;

int main(){
    int a,sum=0,c=0;
    cin>>a;
    while(a>0){int b=a%10;sum+=b;c++;a=a/10;}
    cout<<c<<" "<<sum<<endl;
}
