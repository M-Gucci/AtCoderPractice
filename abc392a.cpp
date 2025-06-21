#include<iostream>
#include<vector>

int main(){
    int a1,a2,a3;
    std::cin >> a1 >> a2 >> a3;

    if(a1*a2==a3){
        std::cout << "Yes\n";
        return 0;
    }else if(a2*a3==a1){
        std::cout << "Yes\n";
        return 0;
    }else if(a3*a1==a2){
        std::cout << "Yes\n";
        return 0;
    }else{
        std::cout << "No\n";
        return 0;
    }
}