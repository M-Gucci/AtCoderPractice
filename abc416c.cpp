#include<iostream>
#include<string>
#include<algorithm>
#include<vector>

int main(){
    int n, k, x;
    std::cin >> n >> k >> x;
    std::vector<std::string> s;
    for(int i=0;i<n;i++){
        std::string t;
        std::cin >> t;
        s.push_back(t);
    }

    std::vector<std::string> dic;
    std::vector<int> cnt;
    for(int i=0;i<k;i++){
        cnt.push_back(0);
    }
    int flag = 0;
    while(true){
        std::string t;
        for(int i=0;i<k;i++){
            t += s[cnt[i]];
            //std::cout << cnt[i] << " ";
        }
        //std::cout << std::endl;
        dic.push_back(t);
        if(cnt[k-1] == n-1){
            cnt[k-1] = 0;
            int t_idx = k-2;
            while(true){
                if(t_idx < 0){
                    flag = 1;
                    break;
                }
                if(cnt[t_idx] == n-1){
                    cnt[t_idx] = 0;
                    t_idx--;
                    continue;
                }else{
                    cnt[t_idx]++;
                    break;
                }
            }
            if(flag == 1){
                break;
            }
            continue;
        }
        //std::cout << "aaa" << std::endl;
        cnt[k-1]++;
        //std::cout << cnt[k-1] << std::endl;
    }
    //std::cout << dic.size() << std::endl;
    std::sort(dic.begin(), dic.end());
    std::cout << dic[x-1] << std::endl;

}