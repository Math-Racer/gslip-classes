#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Notebooks: ";
    cin>>n;
    int count = 0;
    while(n>4){
        cout<<"Packed: 4"<<endl;
        n = n - 4;
        count++;
    }
    cout<<"Packed: "<<n<<endl;
    cout<<"Passes: "<<count+1;
}

