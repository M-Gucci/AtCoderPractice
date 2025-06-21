#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<utility>

int main(){
    int n;
    std::cin >> n;
    std::vector<std::string> s;
    for(int i=0;i<n;i++){
        std::string tmp_s;
        std::cin >> tmp_s;
        s.push_back(tmp_s);
    }

    std::vector<int> s_size;
    for(int i=0;i<n;i++){
        int size=s[i].size();
        s_size.push_back(size);
        //std::cout << size;
    }

    for(int i=0;i<n;i++){
        int min,min_idx;
        for(int j=0;j<n;j++){
            if(j==0){
                min=s_size[j];
                min_idx=j;
                continue;
            }

            if(min>s_size[j]){
                min=s_size[j];
                min_idx=j;
            }
        }
        s_size[min_idx]=100;
        std::cout << s[min_idx];
    }

    std::cout << std::endl;
}