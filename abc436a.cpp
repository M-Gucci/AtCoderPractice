#include<iostream>
#include<vector>
#include<string>
#include<algorithm>

int main(){
    int n;
    std::string s;
    std::cin >> n;
    std::cin >> s;
    int size = s.size();
    for(int i=1;i<=n-size;i++){
        s = "o" + s;
    }

    std::cout << s;
}