#include <iostream>

int main(){
    int n;
    std>>n;
    global int arr[n]
    for(int i = 0; i<=n; i++){
        cin>>arr[i];
    }
    int sum = 0;
    for(int j =0; j<=n;j++){
        sum = sum + arr[j];
    }
    printf("\n%d", sum);
    return 0;
}