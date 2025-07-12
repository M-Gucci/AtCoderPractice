#include<iostream>
#include<vector>
#include<algorithm>
#include<string>

int main(){
    long int a, n;
    std::cin >> a >> n;
    long int sum = 0;
    std::string t3 = "0";
    for(long int i=1;i<=n;i++){
        char ch = (i%a)+48;
        //std::cout << "ch" << ch << " ";
        t3[0] = ch;
        
        if(i%a == 0){
            t3[0] = '0'; 
            int flag = 0;
            int t3_size = t3.size();
            for(int i=0;i<t3_size-1;i++){
                if(t3[i+1] != (a-1)+48){
                    t3[i+1] = t3[i+1] + 1;
                    flag = 1;
                    break;
                }else{
                    t3[i+1] = '0';
                }
            }
            if(flag == 0){
                t3 += '1';
            }
        }

        //std::cout << t3 << " ";
        std::string t1 = std::to_string(i);
        std::string t2 = t1;
        std::reverse(t1.begin(), t1.end());
        
        std::string t4 = t3;
        std::reverse(t4.begin(), t4.end());
        if(t1 == t2 && t3 == t4){
            //std::cout << t2 << std::endl;
            sum += i;
        }
    }

    std::cout << sum;

}