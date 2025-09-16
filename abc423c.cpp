#include <iostream>
#include <string>
#include <vector>

int main()
{
    int n, r;
    std::cin >> n >> r;
    std::vector<int> l;
    for (int i = 0; i < n; i++)
    {
        int t;
        std::cin >> t;
        l.push_back(t);
    }
    int idx_1 = r, flag = 0, cnt_1 = 0;
    for (int i = 0; i < r; i++)
    {
        if (l[i] == 0)
        {
            idx_1 = i;
            flag = 1;
            break;
        }
    }
    if (flag == 0)
    {
    }
    else
    {
        //std::cout << "idx_1: " << idx_1 << std::endl;
        for (int i = idx_1; i < r; i++)
        {
            if (l[i] == 1)
            {
                //std::cout << "i: " << i << std::endl;
                cnt_1 += 1;
            }
        }
    }
    //std::cout << "r-idx_1: " << r - idx_1 << std::endl;
    cnt_1 += r - idx_1;
    int idx_2 = r - 1, flag2 = 0;
    for (int i = n - 1; i >= r; i--)
    {
        if (l[i] == 0)
        {
            idx_2 = i;
            flag2 = 1; 
            break;
        }
    }

    if(flag2 == 0){

    }else{
        //std::cout << "idx_2: " << idx_2 << std::endl;
        for(int i=r;i<=idx_2;i++){
            if(l[i] == 1){
                //std::cout << "i: " << i << std::endl;
                cnt_1 += 1;
            }
        }
    }
    //std::cout << "idx_2 - r: " << idx_2 - r << std::endl;
    cnt_1 += idx_2 - r + 1;
    std::cout << cnt_1 << std::endl;
}