#include<iostream>
#include<string>
#include<vector>
#include<map>
#include<utility>
#include<algorithm>

int main(){
    int n;
    std::cin >> n;
    std::vector<std::string> s;
    for(int i=0;i<n;i++){
        std::string t;
        std::cin >> t;
        s.push_back(t);
    }

    int status=0;
    int cnt=0;
    for(int i=0;i<n;i++){
        if(s[i]=="login"){
            status=1;
        }
        if(s[i]=="logout"){
            status=0;
        }
        if(s[i]=="private"){
            if(status==0){
                cnt++;
            }
        }
    }

    std::cout << cnt << std::endl;

}