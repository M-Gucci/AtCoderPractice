#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

int main(){
    int n,m;
    std::cin >> n >> m;
    char s[100][100];
    char t[100][100];

    for(int i=1;i<=n;i++){
        std::string tmp;
        std::cin >> tmp;
        for(int j=1;j<=n;j++){
            s[i][j]=tmp[j-1];
        }
    }

    for(int i=1;i<=m;i++){
        std::string tmp;
        std::cin >> tmp;
        for(int j=1;j<=m;j++){
            t[i][j]=tmp[j-1];
        }
    }

    for(int o=1;o<=n-m+1;o++){
        for(int k=1;k<=n-m+1;k++){
            int flag=1;
            for(int i=1;i<=m;i++){
                for(int j=1;j<=m;j++){
                    if(s[o+i-1][k+j-1]!=t[i][j]){
                        flag=0;
                        break;
                    }
                }
                if(flag==0){
                    break;
                }
            }
            if(flag==1){
                std::cout << o << " " << k << std::endl;
                return 0;
            }
        }
    }


}