#include <iostream>
using namespace std;
int main(){
    int n;
    int mask=0;
    cout<<"enter a number:";
    cin>>n;
    while(mask<n){
        mask=(mask<<1)|1;
        }
    cout<<((n)^mask);
    return 0;
}