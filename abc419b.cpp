#include<iostream>
#include<vector>
#include<string>
#include<algorithm>

int main(){
    int q;
    std::cin >> q;
    std::vector<int> a;
    for(int i=0;i<q;i++){
        int jug;
        std::cin >> jug;
        if(jug == 1){
            int x;
            std::cin >> x;
            a.push_back(x);
            std::sort(a.begin(), a.end());
        }else{
            std::cout << a[0] << std::endl;
            a.erase(a.begin());
        }
    }
    return 0;
}