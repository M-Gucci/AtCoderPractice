#include<iostream>
#include<vector>

int main(){
    double x;
    std::cin >> x;
    if(x==0.0){
        std::cout << 0;
        return 0;
    }else if(x==0.001){
        std::cout << 0.001;
        return 0;
    }
    std::vector<int> a;
    int X=x;
    int u=0;
    if(X==0){
        x+=1.0;
        u=1;
    }
    int x_t=x*1000;
    while(true){
        int tmp=x_t%10;
        a.push_back(tmp);
        x_t/=10;
        if(x_t==0){
            break;
        }
    }
    if(u==1){
        a[3]=0;
    }
    std::vector<int> b;
    int size=a.size();
    for(int i=size-1;i>=0;i--){
        b.push_back(a[i]);
    }
    /*int n=b.size();
    for(int i=0;i<n;i++){
        std::cout << b[i];
    }
    std::cout << "\n";
    */
    
    int z_c=0;
    for(int i=0;i<3;i++){
        if(a[i]==0){
            z_c++;
        }else{
            break;
        }
    }
    int b_size=b.size();
    if(z_c==3){
        for(int i=0;i<b_size-3;i++){
            std::cout << b[i];
        }
    }else if(z_c==2){
        for(int i=0;i<b_size-2;i++){
            if(i==b_size-3){
                std::cout << "." << b[i];
            }else{
                std::cout << b[i];
            }
        }
    }else if(z_c==1){
        for(int i=0;i<b_size-1;i++){
            if(i==b_size-3){
                std::cout << "." << b[i];
            }else{
                std::cout << b[i];
            }
        }
    }else{
        for(int i=0;i<b_size;i++){
            if(i==b_size-3){
                std::cout << "." << b[i];
            }else{
                std::cout << b[i];
            }
        }
    }
}