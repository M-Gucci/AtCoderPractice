#include<iostream>
#include<string>
#include<vector>
#include<map>

int main(){
    std::string s;
    std::cin >> s;
    std::map<char, int> map;
    for(int i=0;i<int(s.size());i++){
        if(map.find(s[i]) == map.end()){
            map[s[i]] = 1;
        }else{
            map[s[i]]++;
        }
    }

    for(auto val : map){
        if(val.second == 1){
            std::cout << val.first << std::endl;
            return 0;
        }
    }
}