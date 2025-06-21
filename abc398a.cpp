#include<iostream>
#include<vector>
#include<string>

int main(){
    int n;
    std::cin >> n;
    if(n%2==0){
        for(int i=0;i<((n/2)-1);i++){
            std::cout << "-";
        }
        std::cout << "==";
        for(int i=0;i<((n/2)-1);i++){
            std::cout << "-";
        }
    }else{
        for(int i=0;i<(n/2);i++){
            std::cout << "-";
        }
        std::cout << "=";
        for(int i=0;i<(n/2);i++){
            std::cout << "-";
        }
    }

    std::cout << std::endl;
}