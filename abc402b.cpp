#include<iostream>
#include<vector>
#include<string>
#include<map>
#include<algorithm>

int main(){
    int q;
    std::cin >> q;

    std::vector<int> a;

    for(int i=0;i<q;i++){
        int t;
        std::cin >> t;
        if(t==1){
            int x;
            std::cin >> x;
            a.push_back(x);
        }else{
            std::cout << a[0] << std::endl;
            a.erase(a.begin());
        }
    }

}