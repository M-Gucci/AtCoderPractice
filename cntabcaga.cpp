//miss
#include<iostream>
#include<vector>
#include<string>

int main(){
    int n,q;
    std::cin >> n >> q;
    std::string s;
    std::cin >> s;
    std::vector<int> ans;
    for(int i=0;i<q;i++){
        int cnt=0;
        int x;
        char c;
        std::cin >> x >> c;
        if(c==s[x-1]){
            ans.push_back(ans[i-1]);
            continue;
        }
        s[x-1]=c;
        
        for(int j=0;j<n;j++){
            if(s[j]=='A'){
                if(s[j+1]=='B' && j+1<){
                    if(s[j+2]=='C'){
                        cnt++;
                    }
                }
            }
        }
        
        ans.push_back(cnt);
    
    
    }
    int size=ans.size();
    for(int i=0;i<size;i++){
        std::cout << ans[i] << "\n";
    }
}