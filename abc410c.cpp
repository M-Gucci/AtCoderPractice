#include<iostream>
#include<vector>
#include<string>
#include<algorithm>

int main(){
    int n,q;
    std::cin >> n >> q;
    std::vector<int> a;
    for(int i=1;i<=n;i++){
        a.push_back(i);
    }
    long int k = 0;
    for(int i=0;i<q;i++){
        int t;
        std::cin >> t;
        if(t == 1){
            int p,x;
            std::cin >> p >> x;
            p--;
            int idx = (p+k)%(n);
            a[idx] = x;
        }else if(t == 2){
            int p;
            std::cin >> p;
            p--;
            int idx = (p+k)%(n);
            std::cout << a[idx] << std::endl;
        }else{
            long int t1;
            std::cin >> t1;
            k += t1;
            k = k % n;
            /*
            int flag = 0;
            std::vector<int> a_copy;
            a_copy.push_back(0);
            for(int j=1;j<=n;j++){
                a_copy.push_back(a[j]);
            }
            */
            //for(int j=1;j<=n;j++){
        
            //    long int t_idx = (j+k)%(n+1);
            //    if(flag == 1){
            //        t_idx++;
            //    }
            //   if(t_idx == 0){
            //        flag = 1;
            //        t_idx++;
            //    }
            //    //std::cout << "t_idx " << t_idx << std::endl;
            //    a[j] = a_copy[t_idx];
            //}
            //for(int j=1;j<=n;j++){
            //    std::cout << a[j] << " ";
            //}
        }
    }
}