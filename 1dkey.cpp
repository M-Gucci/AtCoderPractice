#include<iostream>
#include<vector>
#include<string>

int main(){
    std::string s;
    std::cin >> s;
    char c ='A';
    int i=0;
    int all=0;
    while(true){
        int tmp_c=0;
        int flag=0;
        int tmp_i=i;
        while(true){
            if(s[i]==c){
                break;
            }else{
                if(flag==0){
                    i++;
                    tmp_c++;
                }else{
                    i--;
                    tmp_c++;
                }
            }
            if(i==25){
                flag=1;
                tmp_c=0;
                i=tmp_i;
            }
        }
        all+=tmp_c;
        if(c=='Z'){
            break;
        }
        c+=1;
    }
    std::cout << all << "\n";
}