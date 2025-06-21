#include<iostream>
#include<vector>
#include<algorithm>

int main(){
    int n,m;
    std::cin >> n >> m;
    std::vector<int> a;
    for(int i=0;i<m;i++){
        int t;
        std::cin >> t;
        a.push_back(t);
    }

    std::vector<int> ans;
    std::sort(a.begin(),a.end());
    int idx=0;
    for(int i=0;i<n;i++){
        if(a[idx]==(i+1)){
            idx++;
        }else{
            ans.push_back(i+1);
        }
    }

    std::cout << ans.size() << std::endl;
    for(int i=0;i<ans.size();i++){
        std::cout << ans[i] << " ";
    }
    std::cout << std::endl;
}