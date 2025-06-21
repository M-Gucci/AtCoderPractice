#include<iostream>
#include<vector>
#include<string>

int main(){
    std::string s1,s2;
    std::cin >> s1 >> s2;
    if(s1=="sick" && s2=="sick"){
        std::cout << 1 << std::endl;
    }else if(s1=="sick"){
        std::cout << 2 << std::endl;
    }else if(s2=="sick"){
        std::cout << 3 << std::endl;
    }else{
        std::cout << 4 << std::endl;
    }

    return 0;
}