
//MuhsinJON Isaqjonov (if)


#include <iostream>
using namespace std;

int main() {
    float x,y;
    cin>>x>>y;// n soni kiritiladi
    if (x>y){
        y=(x+y)/2;cout<<y<<endl;
        x=(2*y-x)*x*2;cout<<x<<endl;}
    else if(x<y){
        x=(x+y)/2;cout<<x<<endl;
        y=(2*x-y)*y*2;cout<<y<<endl;
        }
    else{cout<<x<<endl;
    cout<<y<<endl;}


    }
