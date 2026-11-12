#include <iostream>
using namespace std;
int main(){
    int rows, columns;
    cout<<"enter rows"<<endl;
    cin>>rows;

    cout<<"enter columns"<<endl;
    cin>>columns;
    int sum =0;
    for (int i=1; i<rows+1;i++){
        for (int j=1; j<columns+1; j++){
            cout<<i*j<<"\t";
            sum += i*j;
        }
        cout<<endl;
    }
    cout<<"The sum is"<<sum<<endl;
    cout<<"The max is"<<rows*columns;

}