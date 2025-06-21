#include<iostream>
int main(){
    int a,b,c,x,count=0;
    std::cin >> a >> b >> c >> x;
    for(int i=a;i>=0;i--){
        for(int j=b;j>=0;j--){
            for(int k=c;k>=0;k--){
                if(500*i+100*j+50*k==x){
                    //std::cout << i << j << k << "\n";
                    count++;
                }
            }
        }
    }
    std::cout << count;
}