#include<iostream>
#include<vector>
#include<string>
#include<algorithm>

int main(){
    std::string s;
    std::cin >> s;
    int size=s.size();

    while(true){
        int idx,flag=0;
        for(int i=0;i<size-1;i++){
            if(s[i]=='W' && s[i+1]=='A'){
                s[i]='A';
                s[i+1]='C';
                flag=1;
                idx=i;
                break;
            }
        }
    
        if(flag==1){
            while(true){
                if(s[idx-1]=='W'){
                    s[idx]='C';
                    s[idx-1]='A';
                    idx--;
                }else{
                    break;
                }
            }
        }else{
            break;
        }
    }



    std::cout << s << std::endl;
}