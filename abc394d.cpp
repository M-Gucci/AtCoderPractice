#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

int main(){
    std::string s;
    std::cin >> s;
    while(true){
        int size=s.size();
        int flag=0;
        for(int i=0;i<size-1;i++){
            if((s[i]=='(' && s[i+1]==')') || (s[i]=='<' && s[i+1]=='>') || (s[i]=='[' && s[i+1]==']')){
                s.erase(s.begin()+i);
                s.erase(s.begin()+i);
                i--;
                flag=1;
            }
        }
        if(s==""){
            std::cout << "Yes\n";
            return 0;
        }

        if(flag==0){
            break;
        }
    }

    std::cout << "No\n";
}