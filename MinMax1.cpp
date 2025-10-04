#include <iostream>
using namespace std;

int main() {
    int n,k,min,max;
    cout<<"Nechta son kiritasiz:";cin>>n;
    cout<<n<<" ta son kiriting"<<endl;
    cout<<"1-sonni kiriting:";
    cin>>k;
    min=k;
    max=k;
    for (int i =2;i<=n;i++){
        cout<<i<<"-soni kiriting:";cin>>k;
        if (k>max) max=k;
        if(k<min) min=k;}
        cout<<"Max son:"<<max<<endl;
        cout<<"Min son:"<<min<<endl;
    }
