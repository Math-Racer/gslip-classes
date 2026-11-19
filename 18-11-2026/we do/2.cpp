#include <iostream>
using namespace std;

int main(){
    int original_count, corrected_count;
    cin>>original_count>>corrected_count;
    int *ptr = &original_count;
    *ptr = corrected_count;
    cout<<original_count;
}