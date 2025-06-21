#include<iostream>
#include<vector>
#include<algorithm>

int main(){
    int n;
    std::cin >> n;
    std::vector<int> a;
    for(int i=0;i<n;i++){
        int tmp;
        std::cin >> tmp;
        a.push_back(tmp);
    }

    auto it_m=std::max_element(a.begin(),a.end());

    int max=0;
    int idx=0;
    for(int i=0;i<n;i++){
        if(max<a[i] && a[i]!=*it_m){
            max=a[i];
            idx=i;
        }
    }

    std::cout << idx+1;
}