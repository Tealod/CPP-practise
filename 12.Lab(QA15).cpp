#include <iostream>
using namespace std;

int main(){
    int N,n;
    cout<<"Nechta son kiritasiz:"; cin>>N;
    cin>>n;
    int min=n;
    int max=n;
    int j= 1;
    int b=1;
    for(int i =2;i<=N;i++){
        cin>>n;
        if (min>=n) {min=n;j=i;}
        if (max<=n) {max=n;b=i;}
  }
    if (j < b){
        cout<<j<<" "<<min<<endl;}
    else{cout<<b<<" "<<max<<endl;}
        

}  // finding first extremium element and its index
