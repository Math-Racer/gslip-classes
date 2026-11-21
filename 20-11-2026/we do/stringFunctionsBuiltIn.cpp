#include <iostream>
using namespace std;

int main(){
    string sample = "Vijay Ragav";
    cout<<"The string is: "<<sample<<endl;
    cout<<"Length: "<<sample.length()<<endl;
    cout<<"1st char: "<< sample.front()<<endl;
    cout<<"Last char: "<<sample.back()<<endl;
    cout<<"The existence of the string(is): "<<sample.find("jay")<<endl;
    cout<<"The substring of the string is: "<<sample.substr(4,7)<<endl;

}