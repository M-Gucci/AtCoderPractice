#include<iostream>
#include<vector>
#include<string>

int main(){
    std::string s;
    std::cin >> s;
    int n=s.size();
    /*int flag=0;
    for(int i=0;i<n;i++){
        if(s[i]!='.'){
            flag=1; 
            break;
        }
    }
    if(flag==0){
        return 0;
    }
    */
    for(int i=0;i<n;i++){
        if(s[i]=='.'){
            s.erase(s.begin()+i);
            i--;
            n=s.size();
        }
    }

    std::cout << s;
}