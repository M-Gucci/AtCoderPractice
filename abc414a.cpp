#include<iostream>
#include<vector>
#include<algorithm>
int main(){
    int n, l, r;
    std::cin >> n >> l >> r;
    std::vector<int> x;
    std::vector<int> y;

    for(int i=0;i<n;i++){
        int tx, ty;
        std::cin >> tx >> ty;
        x.push_back(tx);
        y.push_back(ty);
    }

    int cnt = 0;

    for(int i=0;i<n;i++){
        if(x[i] <= l  &&  y[i] >= r){
            cnt++;
        }
    }

    std::cout << cnt << std::endl;
}