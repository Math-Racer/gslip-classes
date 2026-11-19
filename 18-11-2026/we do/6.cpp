#include <iostream>
using namespace std;

void addBonus(int *score){
    *score += 5;
}

int main(){
    int score;
    cin>>score;
    if (score>-1 && score<101){
        int *ptr = &score;
        addBonus(ptr);
        cout<<score;
    }
    else{
        cout<<"Error! Should enter marks between 1 and 100"
    }
}