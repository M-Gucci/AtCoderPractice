#include<iostream>
#include<vector>

int main(){
    int a,b,c;
    std::cin >> a >> b >> c;
    std::vector<int> x;
    for(int i=0;i<=23;i++){
        x.push_back(0);
    }
    int cnt=b;
    int flag=0;    
    while(true){
        x[cnt]=1;
        if(cnt==c){
            break;
        }
        if(cnt==23){
            flag=1;
            break;
        }
        cnt++;
    }
    if(flag==1){
        for(int i=0;i<=c;i++){
            x[i]=1;
        }
    }
    if(x[a]==1){
        std::cout << "No";
    }else{
        std::cout << "Yes";
    }

}