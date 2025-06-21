#include<iostream>
#include<vector>
#include<string>

int main(){
    std::vector<std::string> s;
    for(int i=0;i<12;i++){
        std::string tmp;
        std::cin >> tmp;
        s.push_back(tmp);
    }
    int cnt=0;
    for(int i=0;i<12;i++){
        int size=s[i].size();
        if(size==(i+1)){
            cnt++;
        }
    }

    std::cout << cnt << "\n";
}
