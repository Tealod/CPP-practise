//finding min and location

#include <iostream>
using namespace std;

int main(){
    int N,n;
    cout<<"Nechta son kiritasiz:"; cin>>N;
    cin>>n;
    //int max=n;
    int min =n;
    int j =0;
    for(int i =1;i<N;i++){
        cin>>n;
        // if(n>max) max=n;
        if(n<min) {min = n;j=i;}
        }
    //cout<<"Maximum number is "<<max<<endl;
    cout<<"Minimum number is "<<min<<" Location is "<<j<<endl;
}
