#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<map>

int main(){
    int n, m;
    std::cin >> n >> m;
    std::vector<std::string> s;
    for(int i=0;i<n;i++){
        std::string t;
        std::cin >> t;
        s.push_back(t);
    }
    
    std::map<std::string, int> map;
    int cnt = 0;
    for(int i=0;i<=n-m;i++){
        for(int j=0;j<=n-m;j++){
            std::string tmp = ""; 
            int c = 0;
            for(int k=i;k<i+m;k++){
                for(int l=j;l<j+m;l++){
                    //std::cout << "k: " << k << " l: " << l << std::endl;
                    tmp += s[k][l];
                    c++;
                }
            }
            //std::cout << "c: " << c << std::endl;
            //std::cout << tmp << std::endl;
            if(map.find(tmp) == map.end()){
                map[tmp] = 1;
                cnt++;
            }else{
                map[tmp]++;
            }
        }
    }

    std::cout << cnt << std::endl;
    return 0;
}