// ------------------交差判定プログラム--------------------
#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<utility>
#include<cmath>
#include<functional>
// ------------------交差判定プログラム--------------------
#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<utility>
#include<cmath>

struct Point {
    double x, y;
    Point() : x(0), y(0) {}
    Point(double x, double y) : x(x), y(y) {}
};

int sign(double x) {
    return (x > 0) ? 1 : (x < 0) ? -1 : 0;
}

int orientation(const Point& a, const Point& b, const Point& c) {
    double cross = (b.x - a.x) * (c.y - a.y) - (b.y - a.y) * (c.x - a.x);
    return sign(cross);
}

bool segments_intersect(const Point& p1, const Point& p2, const Point& q1, const Point& q2) {
    if (std::max(p1.x, p2.x) < std::min(q1.x, q2.x) ||
        std::max(q1.x, q2.x) < std::min(p1.x, p2.x) ||
        std::max(p1.y, p2.y) < std::min(q1.y, q2.y) ||
        std::max(q1.y, q2.y) < std::min(p1.y, p2.y)) {
        return false;
    }
    int o1 = orientation(p1, p2, q1);
    int o2 = orientation(p1, p2, q2);
    int o3 = orientation(q1, q2, p1);
    int o4 = orientation(q1, q2, p2);
    return (o1 * o2 <= 0) && (o3 * o4 <= 0);
}

bool is_crossing(const Point& a, const Point& b, const std::vector<std::pair<Point, Point>>& used_segments) {
    for (const auto& seg : used_segments) {
        if (segments_intersect(a, b, seg.first, seg.second)) return true;
    }
    return false;
}
// ----------------------------------------------------

int main(){

    int n, m, k;
    std::cin >> n >> m >> k;
    std::vector<Point> d;
    for(int i=0;i<n;i++){
        int xd, yd;
        std::cin >> xd >> yd;
        Point tp = Point(xd, yd);
        d.push_back(tp);
    }
    std::vector<Point> s;
    for(int i=0;i<m;i++){
        int xs, ys;
        std::cin >> xs >> ys;
        Point tp = Point(xs, ys);
        s.push_back(tp);
    }
    std::vector<std::vector<double>> p(k);
    for(int i=0;i<k;i++){
        for(int j=0;j<n;j++){
            double tp;
            std::cin >> tp;
            p[i].push_back(tp);
        }
    }
    
    // 各分別機ごとにp(i,j)でソートし、適性の高いごみの種類を調べる
    for(int i=0; i<k; i++){
        std::vector<std::pair<double, int>> prob_with_index;
        for(int j=0; j<n; j++){
            prob_with_index.push_back({p[i][j], j}); // {確率, ごみの種類}
        }
        std::sort(prob_with_index.rbegin(), prob_with_index.rend()); // 確率が高い順にソート
        // std::cout << "分別機 " << i << " の適性順: ";
        // for(const auto& pr : prob_with_index){
        //     std::cout << pr.second << "(p=" << pr.first << ") ";
        // }
        // std::cout << std::endl;
    }

    // ごみ種類ごとに最大p値と分別機を記録し、最大p値でごみ種類をソート
    std::vector<std::pair<double, int>> max_p_and_type; // {最大p値, ごみ種類}
    for(int j=0; j<n; j++){
        double max_p = -1e9;
        for(int i=0; i<k; i++){
            if(p[i][j] > max_p){
                max_p = p[i][j];
            }
        }
        max_p_and_type.push_back({max_p, j}); // j:ごみ種類
        // std::cout << "ごみ種類 " << j << " に最も有用な分別機: ..." << std::endl;
    }
    std::sort(max_p_and_type.rbegin(), max_p_and_type.rend());
    // std::cout << "ごみ種類の有用順: ";
    // for(const auto& pr : max_p_and_type){
    //     std::cout << pr.second << "(最大p値: " << pr.first << ") ";
    // }
    // std::cout << std::endl;

    // 分別機の配置座標選択
    // sの座標から |x-5000|+|y-5000|が大きく、かつ |x-0|+|y-5000|が最小となる座標を選ぶ
    std::vector<bool> used_s(s.size(), false); // 重複配置防止
    std::vector<Point> bunnbetsuki_pos(n); // 分別機の配置座標
    for(int i=0; i<n; i++){
        int best_idx = -1;
        double best_score = 1e18;
        for(int j=0; j<s.size(); j++){
            if(used_s[j]) continue;
            double dist_wall = std::fabs(s[j].x - 5000) + std::fabs(s[j].y - 5000); // 壁からの遠さ
            double dist_inlet = std::fabs(s[j].x - 0) + std::fabs(s[j].y - 5000);   // 搬入口からの近さ
            double score = -dist_wall + dist_inlet; // 壁から遠く、搬入口から近いほど小
            if(score < best_score){
                best_score = score;
                best_idx = j;
            }
        }
        if(best_idx != -1){
            used_s[best_idx] = true;
            bunnbetsuki_pos[max_p_and_type[i].second] = s[best_idx];
            // std::cout << "分別機 " << max_p_and_type[i].second << " を座標 (" << s[best_idx].x << ", " << s[best_idx].y << ") に配置" << std::endl;
        }
    }

    // 処理機の配置（分別機の最近点に、分別確率が高い順で配置）
    // 分別機の配置座標を使い、未使用のsから最近点を選ぶ
    std::vector<Point> shoriki_pos(n); // 処理機の配置座標
    std::vector<bool> used_s_shori(s.size(), false); // 処理機用の重複防止
    for(int i=0; i<n; i++){
        int idx = max_p_and_type[i].second; // 分別確率が高い順
        int best_idx = -1;
        double min_dist = 1e18;
        for(int j=0; j<s.size(); j++){
            if(used_s[j] || used_s_shori[j]) continue; // 分別機・処理機どちらにも未使用
            double dist = std::fabs(s[j].x - bunnbetsuki_pos[idx].x) + std::fabs(s[j].y - bunnbetsuki_pos[idx].y);
            if(dist < min_dist){
                min_dist = dist;
                best_idx = j;
            }
        }
        if(best_idx != -1){
            used_s_shori[best_idx] = true;
            shoriki_pos[idx] = s[best_idx];
            // std::cout << "処理機 " << idx << " を座標 (" << s[best_idx].x << ", " << s[best_idx].y << ") に配置" << std::endl;
        }
    }

    // --- 分別機・処理機配置の後に経路生成 ---
    // 出口1は最適ごみ種の処理機、出口2は未訪問分別機へ再帰的に経路をつなぐ
    std::vector<std::pair<Point, Point>> used_segments; // 敷設済み線分

    // 分別機ごとに出口1で最適なごみ種を記録
    std::vector<int> best_gomi_for_bunbetsuki(n, -1);
    for(int i=0; i<n; i++){
        double maxp = -1.0;
        int bestj = -1;
        for(int j=0; j<n; j++){
            int bun_idx = i; // 分別機i
            if(p[bun_idx][j] > maxp){
                maxp = p[bun_idx][j];
                bestj = j;
            }
        }
        best_gomi_for_bunbetsuki[i] = bestj;
    }

    // 再帰的経路生成
    std::function<bool(int, int, std::vector<int>&, std::vector<std::pair<Point, Point>>&, std::vector<bool>&)> connect_path =
    [&](int from_bun, int gomi_type, std::vector<int>& visited, std::vector<std::pair<Point, Point>>& used_segments, std::vector<bool>& used_bun) -> bool {
        // 出口1: 最適ごみ種の処理機
        int bestj = best_gomi_for_bunbetsuki[from_bun];
        Point from = bunnbetsuki_pos[from_bun];
        Point to1 = shoriki_pos[bestj];
        if(!is_crossing(from, to1, used_segments)){
            used_segments.push_back({from, to1});
            // 経路登録や出力用の情報をここで管理可能
        } else {
            return false; // 交差したら失敗
        }

        // 出口2: 未訪問分別機へ
        int next_bun = -1;
        double min_dist = 1e18;
        for(int i=0; i<n; i++){
            if(i == from_bun || used_bun[i]) continue;
            double dist = std::fabs(from.x - bunnbetsuki_pos[i].x) + std::fabs(from.y - bunnbetsuki_pos[i].y);
            if(dist < min_dist){
                min_dist = dist;
                next_bun = i;
            }
        }
        if(next_bun != -1){
            Point to2 = bunnbetsuki_pos[next_bun];
            if(!is_crossing(from, to2, used_segments)){
                used_segments.push_back({from, to2});
                used_bun[next_bun] = true;
                visited.push_back(next_bun);
                connect_path(next_bun, gomi_type, visited, used_segments, used_bun);
                visited.pop_back();
                used_bun[next_bun] = false;
            }
        }
        return true;
    };

    // 搬入口から最も近い分別機へ
    Point in = Point(0, 5000);
    int start_bun = -1;
    double min_dist = 1e18;
    for(int i=0; i<n; i++){
        double dist = std::fabs(in.x - bunnbetsuki_pos[i].x) + std::fabs(in.y - bunnbetsuki_pos[i].y);
        if(dist < min_dist){
            min_dist = dist;
            start_bun = i;
        }
    }
    if(start_bun != -1){
        if(!is_crossing(in, bunnbetsuki_pos[start_bun], used_segments)){
            used_segments.push_back({in, bunnbetsuki_pos[start_bun]});
            std::vector<int> visited = {start_bun};
            std::vector<bool> used_bun(n, false);
            used_bun[start_bun] = true;
            connect_path(start_bun, best_gomi_for_bunbetsuki[start_bun], visited, used_segments, used_bun);
        }
    }
    // --- 出力部 ---
    // 1. 各処理装置設置場所にどのごみ種の処理装置を置くか（dの順に出力）
    // shoriki_pos[j]がd[i]と一致するjを出力
    for(int i=0; i<n; i++){
        int gomi_type = -1;
        for(int j=0; j<n; j++){
            if(shoriki_pos[j].x == d[i].x && shoriki_pos[j].y == d[i].y){
                gomi_type = j;
                break;
            }
        }
        std::cout << gomi_type << (i==n-1?"\n":" ");
    }

    // 2. 搬入口から出るベルトコンベアの行き先（分別機設置場所のインデックス）
    int start_bun_place = -1;
    for(int i=0; i<m; i++){
        if(bunnbetsuki_pos[start_bun].x == s[i].x && bunnbetsuki_pos[start_bun].y == s[i].y){
            start_bun_place = i;
            break;
        }
    }
    std::cout << n+start_bun_place << std::endl;

    // --- 分別機設置場所ごとの割り当てを記録 ---
    // place_to_bunbetsuki[i] = 割り当てた分別機番号（なければ-1）
    std::vector<int> place_to_bunbetsuki(m, -1);
    for(int j=0; j<n; j++){
        for(int i=0; i<m; i++){
            if(bunnbetsuki_pos[j].x == s[i].x && bunnbetsuki_pos[j].y == s[i].y){
                place_to_bunbetsuki[i] = j;
                break;
            }
        }
    }

    for(int i=0; i<m; i++){
        int bun_idx = place_to_bunbetsuki[i];
        if(bun_idx == -1){
            std::cout << -1 << std::endl;
        }else{
            // 分別機の種類ktypeはbun_idx（分別機番号）
            int ktype = bun_idx;
            // 出口1: best_gomi_for_bunbetsuki[bun_idx]の処理機設置場所インデックス（dの順）
            int bestj = best_gomi_for_bunbetsuki[bun_idx];
            int v1 = -1;
            for(int t=0; t<n; t++){
                if(shoriki_pos[bestj].x == d[t].x && shoriki_pos[bestj].y == d[t].y){
                    v1 = t;
                    break;
                }
            }
            // 出口2: 最も近い他の分別機設置場所インデックス（n+設置場所インデックス）
            int v2 = -1;
            double min_dist2 = 1e18;
            int v2_place = -1;
            for(int j2=0; j2<n; j2++){
                if(j2 == bun_idx) continue;
                // 分別機j2の設置場所インデックスを探す
                int place_idx = -1;
                for(int t=0; t<m; t++){
                    if(bunnbetsuki_pos[j2].x == s[t].x && bunnbetsuki_pos[j2].y == s[t].y){
                        place_idx = t;
                        break;
                    }
                }
                if(place_idx == -1) continue;
                double dist = std::fabs(bunnbetsuki_pos[bun_idx].x - bunnbetsuki_pos[j2].x) + std::fabs(bunnbetsuki_pos[bun_idx].y - bunnbetsuki_pos[j2].y);
                if(dist < min_dist2){
                    min_dist2 = dist;
                    v2_place = place_idx;
                }
            }
            if(v2_place != -1) v2 = n+v2_place;
            std::cout << ktype << " " << v1 << " " << v2 << std::endl;
        }
    }
}