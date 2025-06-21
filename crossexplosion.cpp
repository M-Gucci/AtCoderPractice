//TLE制限時間超過
#include<iostream>
#include<vector>
#include<utility>

int main(){
    int h,w,q;
    std::cin >> h >> w >> q;
    int cnt=h*w;
    //std::cout << cnt << "i" << "\n";
    std::vector<std::pair<int,int>> a;
    for(int i=0;i<q;i++){
        int tmp1,tmp2;
        std::cin >> tmp1 >> tmp2;
        a.push_back({tmp1,tmp2});
    }
    int b[h+10][w+10]={0};

    for(int i=0;i<q;i++){
        int r=a[i].first;
        int c=a[i].second;
        if(b[r][c]==0){
            b[r][c]=1;
            cnt--;
            //std::cout << "i";
            continue;
        }else{
            for(int i=r-1;i>=1;i--){
                if(b[i][c]==0){
                    b[i][c]=1;
                    cnt--;
                    //std::cout << "i";
                    break;
                }
            }
            for(int i=r+1;i<=h;i++){
                if(b[i][c]==0){
                    b[i][c]=1;
                    cnt--;
                    //std::cout << "i";
                    break;
                }
            }
            for(int i=c-1;i>=1;i--){
                if(b[r][i]==0){
                    b[r][i]=1;
                    cnt--;
                    //std::cout << "i";
                    break;
                }
            }
            for(int i=c+1;i<=w;i++){
                if(b[r][i]==0){
                    b[r][i]=1;
                    cnt--;
                    //std::cout << "i";
                    break;
                }
            }
        }
    }

    std::cout << cnt;
    return 0;
}