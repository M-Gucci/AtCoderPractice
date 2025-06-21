#include<iostream>
#include<string>
#include<vector>

int main(){
    int n;
    std::cin >> n;
    std::string s,t;
    std::cin >> s >> t;
    int cnt=0;
    for(int i=0;i<n;i++){
        if(s[i]!=t[i]){
            cnt++;
        }
    }

    std::cout << cnt << std::endl;
}