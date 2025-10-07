//MIN and MAX Problem

#include <iostream>
using namespace std;

int main(){
    int N,n;
    cout<<"Nechta son kiritasiz:"; cin>>N;
    cout<<"1-sonni kiriting:"; cin>>n;
    int max=n;
    int min =n;
    for(int i =1;i<N;i++){
        cout<<i+1<<"-sonni kiriting:"; cin>>n;
        if(n>max) max=n;
        else if(n<min) min = n;
        }
    cout<<"Maximum number is "<<max<<endl;
    cout<<"Minimum number is "<<min<<endl;
}
