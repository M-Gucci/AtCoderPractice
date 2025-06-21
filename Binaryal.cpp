#include<iostream>
#include<vector>

int main(){
    int n;
    std::cin >> n;
    int a[109][109];

    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            int tmp;
            std::cin >> tmp;
            a[i][j]=tmp;
        }
    }
    if(n==1){
        std::cout << a[1][1];
        return 0;
    }
    if(n==2){
        int tmp=a[1][1];
        if(tmp>=2){
            std::cout << a[tmp][2];
        }else{
            std::cout << a[2][tmp];
        }
        return 0;
    }
    int I=1,J=1;
    for(int i=2;i<=n+1;i++){
        if(I>=J){
            I=a[I][J];
            if(i==n+1){
                std::cout << I;
                return 0; 
            }else{
                J=i;
            }
        }else{
            I=a[J][I];
            if(i==n+1){
                std::cout << I;
                return 0; 
            }else{
                J=i;
            }
        }
    }
}