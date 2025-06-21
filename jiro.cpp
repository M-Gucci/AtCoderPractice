#include<iostream>
#include<vector>
#include<string>

int main(){
    std::string s1, s2, s3;
    std::cin >> s1 >> s2 >> s3;

    if(s1=="<"){
        if(s2==">"){
            std::cout << "a";
            return 0;
        }else{
            if(s3=="<"){
                std::cout << "b";
                return 0;
            }else{
                std::cout << "c";
                return 0;
            }
        }
    }else if(s1==">"){
        if(s3==">"){
            std::cout << "b";
        }else{
            if(s2=="")
        }
    }
}