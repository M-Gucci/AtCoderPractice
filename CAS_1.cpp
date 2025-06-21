#include<iostream>
#include<vector>

int main(){
    int n;
    std::cin >> n;
    std::vector<int> a;
    for(int i=0;i<n;i++){
        int tmp;
        std::cin >> tmp;
        a.push_back(tmp);
    }
    int cnt=0;
    int d;
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            int flag=1;
            if(i==j){
                //std::cout << i << " " << j << "\n";
                    cnt++;
                    continue;
            }

            for(int k=i+1;k<=j;k++){
                if(k==i+1){
                    d=a[k]-a[k-1];
                }else{
                    if(d!=a[k]-a[k-1]){
                        //std::cout << i << " " << k << "!" << "\n";
                        flag=0;
                        break;
                    }
                }
            }

            if(flag==1){
                //std::cout << i << " " << j << "\n";
                cnt++;
            }
        }
    }

    std::cout << cnt << "\n";
}