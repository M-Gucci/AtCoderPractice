#include<iostream>
#include<vector>
#include<string>
bool jug(std::string n){
    std::string tmp;
    int leng=n.length();
    for(int i=0;i<leng;i++){
        char t=n[leng-(i+1)];
        std::string a={t};
        tmp+=a;
    }
    if(n==tmp){
        return true;
    }else{
        return false;
    }
}

int main(){
    int n,k;
    std::cin >> n >> k;
    std::string s;
    std::cin >> s;
    std::string tmp;
    int leng=tmp.length();
    for(int i=0;i<leng;i++){
        char t=tmp[leng-(i+1)];

    }

}