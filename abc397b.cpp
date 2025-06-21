#include<iostream>
#include<vector>
#include<string>

int main(){
    std::string s;
    std::cin >> s;
    int n=s.size();
    int o_size=n;
    int a_size=n;
    if(s[0]!='i'){
        a_size++;
        //std::cout << "i_incriment\n";
    }

    for(int i=1;i<n;i++){
        //std::cout << i;
        if(s[i]==s[i-1]){
            a_size++;
            //std::cout << "f_incriment\n";
        }
    }
    if(a_size%2==1){
        a_size++;
        //std::cout << "odd_incriment\n";
    }

    std::cout << a_size-o_size << std::endl;
}
