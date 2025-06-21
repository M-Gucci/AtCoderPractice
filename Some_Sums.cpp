#include<iostream>
#include<vector>
int main(){
    int n,a,b,SUM=0;
    std::cin >> n >> a >> b;
    for(int i=1;i<=n;i++){
        int sum=0,tmp=i;
        while(true){
            int y=tmp%10;
            sum+=y;
            tmp/=10;
            if(tmp==0){
                if(sum>=a && sum<=b){
                    SUM+=i;
                    //std::cout << i << " ";
                }
                break;
            }
        }
    }
    std::cout << SUM;
}