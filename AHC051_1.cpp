#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

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

int main(){
    int n, m, k;
    std::cin >> n >> m >> k;
    int xd[30];
    int yd[30];
    for(int i=0;i<n;i++){
        std::cin >> xd[i] >> yd[i];
    }
    int xs[1010];
    int ys[1010];
    for(int i=0;i<m;i++){
        std::cin >> xs[i] >> ys[i];
    }
    double p[100][30];
    for(int i=0;i<k;i++){
        for(int j=0;j<n;j++){
            std::cin >> p[i][j];
        }
    }

    for(int i=0;i<n;i++){
        std::cout << i << " ";
    }
    std::cout << std::endl;
    std::cout << 0;
    std::cout << std::endl;
    for(int i=0;i<m;i++){
        std::cout << -1 << std::endl;
    }

}