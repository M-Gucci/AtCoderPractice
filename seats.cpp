#include<iostream>
#include<vector>
#include<string>

int main(){
    int n;
    std::cin >> n;
    std::string s;
    std::vector<char> a;
    std::cin >> s;
    for(int i=0;i<n;i++){
        a.push_back(s[i]);
    }
    int cnt=0;
    for(int i=0;i<n-2;i++){
        //std::cout << a[i] << a[i+2] << a[i+1] << "\n";
        if(a[i]=='#' && a[i+2]=='#' && a[i+1]=='.'){
            cnt++;
        }
    }

    std::cout << cnt;
}