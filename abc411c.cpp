#include<iostream>
#include<vector>
#include<string>

int main(){
    int n, q;
    std::cin >> n >> q;
    std::vector<int> a;
    for(int i=0;i<=n;i++){
        a.push_back(0);
    }

    int cnt = 0;

    for(int i=1;i<=q;i++){
        int ai;
        std::cin >> ai;
        if(a[ai] == 1){
            a[ai] = 0;
            if(ai != 1 && ai != n){
                if(a[ai-1] == 1 && a[ai+1] == 1){
                    cnt++;
                }else if(a[ai-1] == 1 || a[ai+1] == 1){

                }else{
                    cnt--;
                }
            }else if(ai == 1){
                if(a[ai+1] == 1){

                }else{
                    cnt--;
                }
            }else{
                if(a[ai-1] == 1){

                }else{
                    cnt--;
                }
            }
        }else{
            a[ai] = 1;
            if(ai != 1 && ai != 1){
                if(a[ai-1] == 1 && a[ai+1] == 1){
                    cnt--;
                }else if (a[ai-1] == 1 || a[ai+1] == 1){

                }else{
                    cnt++;
                }
            }else if(ai == 1){
                if(a[ai+1] == 1){

                }else{
                    cnt++;
                }
            }else{
                if(a[ai-1] == 1){

                }else{
                    cnt++;
                }
            }
        }
        std::cout << cnt << std::endl;
    }
}