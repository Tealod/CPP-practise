
//MuhsinJON Isaqjonov (Prime)

//Checking Prime or not
#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    if(n==1) cout<<"1 murakkab son do'stim"<<endl;
    for(int i =2;i<=n;i++){//Numbers among n (input)
        int count =0;
        for(int j=1;j<=i/2;j++){//Nega O'zini yarimigacha oldik sabab 30 faqat 15 ga cha bolgan sonlarga bolinishi mumkin 16 17 u aniq xato;
            if(i%j==0) count+=1;//agar biz tanlab olgan sonni bolganda qoldiq bolmasa boluvchilarga qoshib ketamiz 
            }
        if(count==1) cout<<i<<endl;//agar countimiz 1 chiqishi kerak  chunki har qanday son 1 ga bolinadi;
            
        }
    
 
    }
