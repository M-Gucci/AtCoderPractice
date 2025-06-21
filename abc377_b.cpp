#include<iostream>
#include<string>
#include<vector>

int main(){
    std::vector<std::string> S;
    int lines=8;
    for(int i=0;i<lines;i++){
        std::string s_tmp;
        std::cin >> s_tmp;
        S.push_back(s_tmp);
    }

    std::vector<std::string> jug;
    for(int i=0;i<lines;i++){
        jug.push_back("........");
    }
    for(int i=0;i<lines;i++){
        if(S[i]!="........"){
            jug[i]="########";
        }
    }
    for(int i=0;i<lines;i++){
        for(int j=0;j<lines;j++){
            if((S[i])[j]=='#'){
                for(int k=0;k<lines;k++){
                    (jug[k])[j]='#';
                }
            }
        }
    }

    int cnt=0;
    for(int i=0;i<lines;i++){
        for(int j=0;j<lines;j++){
            if((jug[i])[j]=='.'){
                //std::cout << i << " " << j << "\n";
                cnt++;
            }
        }
    }

    std::cout << cnt << "\n";
}