#include<iostream>
#include<vector>
#include<string>
#include<cmath>
#define rep(i,n) for (int i=0;i<n;i++)
//aの個数を決める→bの作れる個数を決める→判定
int main(){
    int n;
    std::cin >> n;
    std::vector<int> q(n), a(n), b(n);
    rep(i,n) std::cin >> q[i];
    rep(i,n) std::cin >> a[i];
    rep(i,n) std::cin >> b[i];

    int ans=0;
    for(int x=0;;x++){ //上限は決めてない
        std::vector<int> r(n);
        rep(i,n) r[i]=q[i]-a[i]*x;
        bool ok=true;
        rep(i,n) if(r[i]<0) ok=false;
        if(!ok) break; //aが作れなくなったら終わり
        int y = 1001001001;
        rep(i,n){
            if(b[i]==0) continue; //0での除算防止(bを作るにあたって材料biが必要ない)
            y=std::min(y,r[i]/b[i]);
        }
        ans=std::max(ans,x+y);
    }
    std::cout << ans << std::endl;
    return 0;
}