#include<iostream>
#include<vector>
#include<string> 

int main(){
    int h,w,x,y;
    std::cin >> h >> w >> x >> y;
    std::string a[101][101];
    for(int i=1;i<=h;i++){
        std::string tmp;
        std::cin >> tmp;
        for(int j=1;j<=w;j++){
            a[i][j]=tmp[j-1];
        }
    }

    std::string t;
    std::cin >> t;
    int c=0;

    int size=t.size();
    for(int i=0;i<size;i++){
        if(t[i]=='U'){
            if(a[x-1][y]=="." || a[x-1][y]=="@"){
                x=x-1;
                if(a[x][y]=="@"){
                    c++;
                    a[x][y]=".";
                }
            }
        }
        if(t[i]=='D'){
            if(a[x+1][y]=="." || a[x+1][y]=="@"){
                x=x+1;
                if(a[x][y]=="@"){
                    c++;
                    a[x][y]=".";
                }
            }
        }
        if(t[i]=='L'){
            if(a[x][y-1]=="." || a[x][y-1]=="@"){
                y=y-1;
                if(a[x][y]=="@"){
                    c++;
                    a[x][y]=".";
                }
            }
        }
        if(t[i]=='R'){
            if(a[x][y+1]=="." || a[x][y+1]=="@"){
                y=y+1;
                if(a[x][y]=="@"){
                    c++;
                    a[x][y]=".";
                }
            }
        }
    }

    std::cout << x << " " << y << " " << c << "\n";
}