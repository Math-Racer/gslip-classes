include <iostream>

int fact(n){
    if (n==1){
        return 1;
    }
    else{
        return n * fact(n-1);
    }
}

int main(){
    int n;
    std::cin>>n;
    int result = fact(n);
    std::cout<<result;
}