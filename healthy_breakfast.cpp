#include<iostream>
#include<string>
int main(){
    std::string s;
    std::cin >> s;
    //std::cout << s[1] << s[2] << s[3];
    if(s[0]=='M'){
        std::cout << "No";
    }
    if(s[1]=='M'){
        if(s[0]=='R'){
            std::cout << "Yes";
        }else{
            std::cout << "No";
        }
    }
    if(s[2]=='M'){
        if(s[0]=='R' || s[1]=='R'){
            std::cout << "Yes";
        }
        else{
            std::cout << "No";
        }
    }

}