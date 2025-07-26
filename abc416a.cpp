#include<iostream>
#include<string>
#include<algorithm>
#include<vector>

int main(){
    int n, l, r;
    std::cin >> n >> l >> r;
    std::string s;
    std::cin >> s;
    for(int i=l-1;i<r;i++){
        if(s[i] != 'o'){
            std::cout << "No" << std::endl;
            return 0;
        }
    }
    std::cout << "Yes" << std::endl;
    return 0;
}