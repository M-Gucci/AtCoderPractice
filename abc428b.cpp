#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<map>

int main(){
    int n, k;
    std::cin >> n >> k;
    std::string s;
    std::cin >> s;

    std::map<std::string, int> cnt;
    for(int i=0;i<n-k+1;i++){
        std::string sub = s.substr(i, k);
        if(cnt.find(sub) == cnt.end()){
            cnt[sub] = 1;
        }else{
            cnt[sub]++;
        }
    }
    int max = 0;
    for(auto val : cnt){
        if(max < val.second){
            max = val.second;
        }
    }

    std::cout << max << std::endl;

    for(auto val : cnt){
        if(val.second == max){
            std::cout << val.first << " ";
        }
    }

    std::cout << std::endl;
}