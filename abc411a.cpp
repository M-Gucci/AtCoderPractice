#include<iostream>
#include<string>
#include<algorithm>
#include<vector>

int main(){
    std::string p;
    std::cin >> p;
    int l;
    std::cin >> l;

    if(p.size() >= l){
        std::cout << "Yes" << std::endl;
    }else{
        std::cout << "No" << std::endl;
    }
}