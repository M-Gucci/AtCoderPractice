#include<iostream>
#include<vector>
#include<string>

int main(){
    std::string s;
    std::cin >> s;
    std::vector<int> cnt(256);
    for(char c : s){ //範囲for文　sは処理すべき範囲を表す
        cnt[c]++; //cにsの要素がひとつづつ代入される
    }
    int mx=0;
    for(char c='a';c<='z';c++){
        mx=std::max(mx,cnt[c]);
    }

    for(char c='a';c<='z';c++){
        if(cnt[c]==mx){
            std::cout << c << std::endl;
            return 0;
        }
    }

}