#include<iostream>
#include<vector>
#include<string>
#include<utility>

int main(){
    int n,w;
    std::cin >> n >> w;
    std::vector<std::pair<int,int>> xy;
    for(int i=0;i<n;i++){
        int tx,ty;
        std::cin >> tx >> ty;
        xy.push_back({tx,ty});
    }
    int q;
    std::cin >> q;
    std::vector<std::pair<int,int>> ta;
    for(int i=0;i<q;i++){
        int tt,tmpa;
        std::cin >> tt >> tmpa;
        ta.push_back({tt,tmpa});
    }

    
}