#include <iostream>
using namespace std;

int addBonus(int score){
    score += 5;
    return score;
}

int main(){
    int score;
    cout<<"Enter score: ";
    cin>>score;

    int preview = addBonus(score);
    cout<<endl<<score<<" "<<preview;

}