#include<iostream>
#include<vector>

int main(){
    unsigned long int n;
    std::cin >> n;
    std::vector<long int> h;
    h.push_back(-1);
    for(unsigned long int i=0;i<n;i++){
        long int tmp;
        std::cin >> tmp;
        h.push_back(tmp);
    }

    /*unsigned long int x=1;
    unsigned long int t=0;
    while(true){
        t++;
        if(t%3==0){
            h[x]=h[x]-3;
        }else{
            h[x]--;
        }
        if(h[x]<=0){
            x++;
        }
        if(x==n+1){
            std::cout << t;
            return 0;
        }
    }*/
    unsigned long int t=0;
    for(unsigned long int i=1;i<=n;i++){
        unsigned long int y=(t%3);
        if(y==1){
            t++;
            h[i]--;
        }else if(y==0){
            t++;
            h[i]--;
            if(h[i]<=0){
                //std::cout << "o:1" << '\n';
                continue;
            }
            t++;
            h[i]--;
        }
        if(h[i]<=0){
            //std::cout << "o:2or1" << "\n";
            continue;
        }
        unsigned long int t_t=h[i]/5;
        t_t=t_t*3;
        if(h[i]%5==4){
            t_t+=2;
        }else if(h[i]%5>=1 && h[i]%5<=3){
            t_t++;
        }
        //std::cout << "t_t:" << t_t << '\n';
        t+=t_t;
    }

    std::cout << t;

}