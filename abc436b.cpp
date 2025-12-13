#include<iostream>
#include<vector>
#include<string>
#include<algorithm>

int main(){
    int a[110][110];
    int n;
    std::cin >> n;

    a[0][int((n-1)/2)] = 1;
    int r = 0, c = int((n-1)/2), k = 1;

    for(int i=0;i<(n*n)-1;i++){
        int r1 = int((r-1)%n), c1 = int((c+1)%n);
        if(r1 < 0){
            r1 = n + r1;
        }
        if(c1 < 0){
            c1 = n + c1;
        }
        int r2 = int((r+1)%n), c2 = c%n;
        if(r2 < 0){
            r2 = n + r2;
        }
        if(c2 < 0){
            c2 = n + c2;
        }
        if(a[r1][c1] == 0){
            k++;
            a[r1][c1] = k;
            r = r1, c = c1;
        }else{
            k++;
            a[r2][c2] = k;
            r = r2, c = c2;
        }
        // std::cout << "r: " << r << " c: " << c << " k: " << k << std::endl;
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            std::cout << a[i][j] << " ";
        }
        std::cout << std::endl;
    }
}