#include<iostream>
#include<vector>
#include<string>

int main(){
    std::string s;
    std::cin >> s;
    int n=s.size();
    int ans=0;
    for(int i=0;i<n;i++){
        if(s[i]=='A'){
            for(int j=i+1;j<n;j++)
            if(s[j]=='B' && j+(j-i)<n && s[j+(j-i)]=='C'){
                ans++;
            }
        }
    }

    std::cout << ans << std::endl;
}