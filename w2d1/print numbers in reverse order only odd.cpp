#include <iostream>
using namespace std;

int main(){
    cout<<"Enter a number: ";
    int n;
    cin>>n;
    for(int i=1;i<=n;i=i+2){
        cout<<i<<" ";
    }
    cout<<endl;
    return 0;
}