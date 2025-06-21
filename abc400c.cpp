#include<iostream>
#include<vector>
#include<string>
#include<map>

int main(){
    long int n;
    std::cin >> n;
    std::map<long int,long int> mp;

    long int cnt1=1;
    long int total_cnt=0;
    while(true){
        long int tmp=(cnt1*cnt1)*2;
        if(tmp>n){
            break;
        }else{
            if(mp.find(tmp)==mp.end()){
                mp[tmp]=1;
                total_cnt++;
                //std::cout << tmp << std::endl;
            }else{
                cnt1++;
                continue;
            }
        }
        cnt1++;
    }

    for(long int i=1;i<=cnt1;i++){
        long int tmp=i*i;
        while(true){
            tmp*=2;
            if(tmp>n){
                break;
            }else{
                if(mp.find(tmp)==mp.end()){
                    mp[tmp]=1;
                    total_cnt++;
                    //std::cout << tmp << std::endl;
                }else{
                    continue;
                }
            }
        }
    }

    std::cout << total_cnt << std::endl;

}