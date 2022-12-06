#include <iostream>
#include<math.h>
using namespace std;
int main(){
    int num,i=0,ans=0,bit;
    cout<<"enter a number";
    cin>>num;
    while(num!=0){
        bit=num&1;
        ans=bit*pow(10,i)+ans;
        num=num>>1;
        i++;
    }
    cout<<ans;
    return 0;
}