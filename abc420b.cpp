#include<iostream>
#include<vector>
#include<string>
#include<algorithm>

int main(){
    int n, m;
    std::cin >> n >> m;
    std::vector<std::string> s;
    for(int i=0;i<n;i++){
        std::string t;
        std::cin >> t;
        s.push_back(t);
    }
    std::vector<int> ans;
    for(int i=0;i<n;i++){
        ans.push_back(0);
    }

    for(int i=0;i<m;i++){
        int cnt_one = 0, cnt_zero = 0;
        for(int j=0;j<n;j++){
            if(s[j][i] == '1'){
                cnt_one++;
            }else{
                cnt_zero++;
            }
        }
        int flag = cnt_one > cnt_zero ? 1 : 0;
        if(cnt_one == 0 || cnt_zero == 0){
            flag = 2;
        }
        //std::cout << "flag: " << flag << std::endl;
        for(int j=0;j<n;j++){
            if(s[j][i] != char(flag + '0')){
                ans[j]++;
            }
        }
    }

    auto max_idx = std::max_element(ans.begin(), ans.end());
    int max = ans[max_idx - ans.begin()];
    //std::cout << "max: " << max << std::endl;
    for(int i=0;i<n;i++){
        //std::cout << "ans[" << i << "] = " << ans[i] << std::endl;
        if(ans[i] == max){
            std::cout << i+1 << " ";
        }
    }
    std::cout << std::endl;

}