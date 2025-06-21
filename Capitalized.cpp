#include<iostream>
#include<vector>
#include<string>
int main(){
    std::string s;
    std::cin >> s;
    int size=s.size();
    for(int i=0;i<size;i++){
        if(i==0){
            if(islower(s[i])){ //bool型ではないことに注意
                std::cout << "No" <<std::endl;
                return 0;
            }
        }else{
            if(isupper(s[i])){
                std::cout << "No" << std::endl;
                return 0;
            }
        }
    }
    std::cout << "Yes" << std::endl;
}