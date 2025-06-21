#include<iostream>
#include<vector>
#include<string>

int main(){
    long int n,m;
    std::cin >> n >> m;
    long int total=0;
    for(int i=0;i<=m;i++){
        if(i==0){
            total+=1;
            continue;
        }
        long int tmp=1;
        for(int j=0;j<i;j++){
            tmp*=n;
        }
        total+=tmp;
        if(total>1000000000){
            std::cout << "inf" << std::endl;
            return 0;
        }
    }
    if(total>1000000000){
        std::cout << "inf" << std::endl;
        return 0;
    }else{
        std::cout << total << std::endl;
        return 0;
    }
}