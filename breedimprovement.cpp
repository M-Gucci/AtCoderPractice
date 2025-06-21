#include<iostream>
#include<vector>

int main(){
    int n,m,t;
    std::cin >> n >> m >> t;

    int seed_count=2*n*(n-1);
    std::vector<std::vector<int>> X(seed_count, std::vector<int>(m,0)); 

    for(int i=0;i<seed_count;i++){
        for(int j=0;j<m;j++){
            std::cin >> X[i][j];
        }
    }

    
}