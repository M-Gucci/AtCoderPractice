#include<iostream>
#include<string>
#include<vector>
#include<utility>
#include<map>

int main(){
    int n,m;
    std::cin >> n >> m;
    std::map<std::pair<int,int>,int> mp;
    int ans=0;
    for(int i=0;i<m;i++){
        int tmp1,tmp2;
        std::cin >> tmp1 >> tmp2;
        if(tmp1==tmp2){
            ans++;
            continue;
        }

        if(tmp1>tmp2){
            std::swap(tmp1,tmp2);
        }

        std::pair<int,int> p_t={tmp1,tmp2};
        auto iter=mp.find(p_t);
        if(iter!=mp.end()){
            mp[p_t]++;
        }else{
            mp[p_t]=1;
        }
    }

    for(auto val : mp){
        ans+=val.second-1;
    }

    std::cout << ans << std::endl;
}