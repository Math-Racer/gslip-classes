
#include <iostream>
using namespace std;

int greatestScore(int a, int b, int c){
    if(a>b){
        if(a>c){
            return a;
        }else{
            return c;
        }
    }else if(b>c){
        return b;
    }else{
        return c;
    }
}

int main(){
    int a,b,c;
    cout<<"Enter a, b, and c : ";
    cin>>a>>b>>c;

    cout<<"Greatest Score : "<<greatestScore(a,b,c);
    return 0;
}