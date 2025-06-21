#include<iostream>

int main(){
    int l,r;
    std::cin >> l >> r;
    if(l==1 && r==0){
        std::cout << "Yes";
    }else if(l==1 && r==1){
        std::cout << "Invalid";
    }else if(l==0 && r==0){
        std::cout << "Invalid";
    }else{
        std::cout << "No";
    }
}