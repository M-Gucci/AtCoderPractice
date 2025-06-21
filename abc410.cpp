#include<iostream>
#include<vector>
#include<string>
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

    int k;
    std::cin >> k;
    int cnt=0;
    for(int i=0;i<n;i++){
        if(k <= a[i]){
            cnt++;
        }
    }

    std::cout << cnt;
}