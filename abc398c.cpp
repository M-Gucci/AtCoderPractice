#include<iostream>
#include<vector>
#include<string>
#include<map>

int main(){
    long n;
    std::cin >> n;
    std::map<long,long> a;
    std::vector<int> b;
    for(int i=0;i<n;i++){
        int tmp;
        std::cin >> tmp;
        if(a.find(tmp)!=a.end()){
            a[tmp]++;
        }else{
            a[tmp]=1;
        }
        b.push_back(tmp);
    }
    
    int flag=-1;
    long max_val=0;
    for(auto val : a){
        if(val.second==1){
            flag=1;
            if(val.first>max_val){
                max_val=val.first;
            }
        }
    }

    if(flag==-1){
        std::cout << -1 << std::endl;
        return 0;
    }else{
        for(int i=0;i<n;i++){
            if(b[i]==max_val){
                std::cout << i+1 << std::endl;
                return 0;
            }
        }
    }
    //std::cout << flag << " " << max_val;
    //std::cout << "miss!" << std::endl;
}