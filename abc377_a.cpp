#include<iostream>
#include<string>
#include<algorithm>


int main(){
    std::string s;
    std::cin >> s;
    int size=s.size();
    int a_cnt=0,b_cnt=0,c_cnt=0;
    for(int i=0;i<size;i++){
        if(s[i]=='A'){
            a_cnt++;
        }else if(s[i]=='B'){
            b_cnt++;
        }else if(s[i]=='C'){
            c_cnt++;
        }
    }

    if(a_cnt==1 && b_cnt==1 && c_cnt==1){
        std::cout << "Yes";
    }else{
        std::cout << "No";
    }

}