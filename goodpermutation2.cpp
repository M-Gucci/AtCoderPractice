#include<iostream>
#include<vector>
#include<algorithm>


int main(){
    std::vector<int> a = {};

    int n,m;
    std::cin >> n >> m;
    
    for(int i=0;i<m;i++){
        int tmp;
        std::cin >> tmp;
        a.push_back(tmp);
    }

    std::vector<int> aaa = {};
    for(int i=0;i<m;i++){
        for(int j=0;j<a[i];j++){
            aaa.push_back(j);
        }
        aaa.push_back(-1);
    }

    int ans[n];

    for(int i=0;i<m;i++){
        
    }

    
}