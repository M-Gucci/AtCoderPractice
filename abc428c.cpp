#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

int main(){
    int q;
    std::cin >> q;
    std::string s;
    int cnt = 0;
    std::vector<int> b;
    b.push_back(0);
    for(int i=0;i<q;i++){
        int n;
        std::cin >> n;
        if(n == 1){
            std::string tmp;
            std::cin >> tmp;
            s.append(tmp);
            if(tmp == "("){
                cnt += 1;
            }else{
                cnt -= 1;
            }
            int size = b.size();
            b.push_back(std::min(cnt, b.back()));
        }else{
            int idx = int(s.size());
            char t = s[idx-1];
            if(t == '('){
                cnt -= 1; 
            }else{
                cnt += 1;
            }
            s.pop_back();
            b.pop_back();
        }

        if(s.size()%2 == 1){
            std::cout << "No" << std::endl;
        }else{
            if(s.size() == 0){
                std::cout << "Yes" << std::endl;
            }else if(cnt == 0 && b.back() > -1){
                std::cout << "Yes" << std::endl;
            }else{
                std::cout << "No" << std::endl;
            }
        }

        //std::cout << "s: " << s << " flag: " << flag << std::endl;
    }
}