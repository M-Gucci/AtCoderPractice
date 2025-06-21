#include<iostream>
#include<vector>
#include<string>

int main(){
    std::string s;
    std::cin >> s;
    int n=s.size();

    for(int i=0;i<n;i++){
        if(s[i]=='2'){
            std::cout << s[i];
        }else{
            continue;
        }
    }
    std::cout << std::endl;
}