#include<iostream>
#include<string>

int main(){
    std::string s;
    std::cin >> s;
    int mid = int(s.size())/2;
    std::string ans = "";
    for(int i=0;i<int(s.size());i++){
        if(i == mid){
            continue;
        }
        ans += s[i];
    }

    std::cout << ans << std::endl;
}