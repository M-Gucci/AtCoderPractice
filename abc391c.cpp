#include<iostream>
#include<vector>
#include<string>
#include<sstream>


int main(){
    int n,q;
    std::cin >> n >> q;
    std::vector<int> bird;
    std::vector<int> place;
    int d=0;
    bird.push_back(0);
    place.push_back(0);
    for(int i=1;i<=n;i++){
        bird.push_back(1);
    }
    for(int i=1;i<=n;i++){
        place.push_back(i);
    }

    for(int i=1;i<=q;i++){
        int a,b,c;
        std::cin >> a;
        if(a==2){
            //std::cout << "i";
            std::cout << d << std::endl;
        }else{
            std::cin >> b >> c;
            int p=b;
            int h=c;
            //std::cout << "p" << p << "h" << h;

            bird[place[p]]--;
            if(bird[place[p]]==1){
                d--;
            }
            bird[h]++;
            place[p]=h;
            if(bird[h]==2){
                d++;
            }
        }
    }
}