#include<iostream>
#include<vector>
#include<string>
#include<map>
#include<algorithm>

int main(){
    std::string s;
    std::cin >> s;

    std::string t;
    int n = s.size();
    for(int i=0;i<n;i++){
        if(std::isupper(s[i])){
            t += s[i];
        }
    }

    std::cout << t;
}