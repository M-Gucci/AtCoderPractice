#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<iterator>

int main(){
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    int n, a, b;
    std::cin >> n >> a >> b;
    std::string s;
    std::cin >> s;

    // 累積和配列を準備 (1-indexedのように扱うため n+1)
    std::vector<int> sum_a(n + 1, 0);
    std::vector<int> sum_b(n + 1, 0);
    for(int i = 0; i < n; i++) {
        sum_a[i+1] = sum_a[i] + (s[i] == 'a');
        sum_b[i+1] = sum_b[i] + (s[i] == 'b');
    }

    long long ans = 0;

    // l を 0 から n-1 までループ
    for(int l = 0; l < n; l++) {
        // 条件1: 区間[l,r]の'a'の数がa個以上
        // sum_a[r+1] - sum_a[l] >= a  =>  sum_a[r+1] >= sum_a[l] + a
        // これを満たす最小の r を探す
        auto it_min = std::lower_bound(sum_a.begin() + l + 1, sum_a.end(), sum_a[l] + a);
        
        if (it_min == sum_a.end()) {
            // 条件を満たすrが存在しない
            continue;
        }
        int min_r = std::distance(sum_a.begin(), it_min) - 1;

        // 条件2: 区間[l,r]の'b'の数がb個未満
        // sum_b[r+1] - sum_b[l] < b  =>  sum_b[r+1] < sum_b[l] + b
        // sum_b[k] >= sum_b[l] + b となる最初の k (=r+1) を見つけ、その手前までが範囲
        auto it_max = std::lower_bound(sum_b.begin() + l + 1, sum_b.end(), sum_b[l] + b);
        int max_r = std::distance(sum_b.begin(), it_max) - 2;

        // 有効なrの範囲が存在する場合のみ加算
        if (min_r <= max_r) {
            ans += (long long)max_r - min_r + 1;
        }
    }

    std::cout << ans << std::endl;

    return 0;
}