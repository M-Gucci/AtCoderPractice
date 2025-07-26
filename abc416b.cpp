#include<iostream>
#include<string>
#include<algorithm>
#include<vector>

int main(){
    std::string s;
    std::cin >> s;
    std::string t;
    int n = s.size();
    int flag = 0;
    for(int i=0;i<n;i++){
        if(s[i] == '#'){
            t += "#";
            flag = 0;
        }else if(flag == 0){
            t += "o";
            flag = 1;
        }else{
            t += ".";
        }
    }

    std::cout << t << std::endl;
    return 0;
    
}