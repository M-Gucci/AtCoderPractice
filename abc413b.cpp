#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<map>

int main(){
    int n;
    std::cin >> n;
    std::vector<std::string> a;
    for(int i=0;i<n;i++){
        std::string t;
        std::cin >> t;
        a.push_back(t);
    }   
    std::map<std::string, int> m;
    int cnt = 0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i == j){
                continue;
            }
            std::string t_s = a[i] + a[j];
            auto iter = m.find(t_s);
            if(iter == m.end()){
                m[t_s] = 1;
                cnt++;
            }else{
                m[t_s]++;
            }
        }
    }

    std::cout << cnt << std::endl;
}