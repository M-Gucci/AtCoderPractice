#include<iostream>
#include<vector>
#include<string>
#include<map>

int main(){
    int n,q;
    std::cin >> n >> q;
    std::string server = "";
    std::map<int, std::string> pc;
    for(int i=0;i<q;i++){
        int num, p;
        std::cin >> num >> p;
        int flag = 0;
        auto iter = pc.find(p);
        if(iter == pc.end()){
            flag = 1;
        }
        if(num == 1){
            if(flag == 1){
                pc[p] = "";
            }
            pc[p] = server;
        }else if(num == 2){
            std::string s;
            std::cin >> s;
            if(flag == 1){
                pc[p] = "";
            }
            pc[p] = pc[p] + s;
        }else{
            if(flag == 1){
                pc[p] = "";
            }
            server = pc[p];
        }
    }

    std::cout << server << std::endl;
}