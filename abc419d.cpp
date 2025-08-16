#include<iostream>
#include<string>
#include<algorithm>
#include<vector>

int main(){
    int n,m;
    std::cin >> n >> m;
    std::string s,t;
    std::cin >> s >> t;
    std::vector<char> sv;
    std::vector<char> tv;
    for(int i=0;i<n;i++){
        sv.push_back(s[i]);
        tv.push_back(t[i]);
    }
    std::vector<int> jug_l;
    std::vector<int> jug_r;
    for(int i=0;i<n;i++){
        jug_l.push_back(0);
        jug_r.push_back(0);
    }

    for(int i=0;i<m;i++){
        int l, r;
        std::cin >> l >> r;
        jug_l[l-1] += 1;
        jug_r[r-1] -= 1;
    }
    /*
    for(int i=0;i<n;i++){
        std::cout << jug_l[i] << " "; 
    }
    std::cout << std::endl;
    for(int i=0;i<n;i++){
        std::cout << jug_r[i] << " "; 
    }
    std::cout << std::endl;
    */
    /*std::vector<int> jug2;
    jug2.push_back((jug_l[0] + jug_r[0]));
    std::cout << jug2[0] << " ";
    for(int i=1;i<n;i++){    
        jug2.push_back((jug2[i-1]+jug_l[i]+jug_r[i]));
        std::cout << jug2[i] << " ";
    }*/
    int now = 0;
    //std::cout << std::endl;
    for(int i=0;i<n;i++){
        if(jug_l[i]%2 == 1){
            now++;
        }
        if(now%2 == 0){
            std::cout << sv[i];
        }else{
            std::cout << tv[i];
        }
        if((-jug_r[i])%2 == 1){
            now++;
        }
    }
    std::cout << std::endl;

    return 0;
}