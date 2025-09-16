#include<iostream>
#include<string>
#include<algorithm>
#include<vector>

int main(){
    std::string s;
    std::cin >> s;
    int n = s.size();
    int t_item = 0;
    int t_idx;
    for(int i=0;i<n;i++){
        if(s[i] == '#'){
            t_item++;
            if(t_item == 1){
                t_idx = i+1;
            }else{
                std::cout << t_idx << "," << i+1 << std::endl;
                t_item = 0;
            }
        }
    }

    return 0;
}