#include <iostream>
#include <queue>
using namespace std;

// 最简单的BFS示例 - 在网格中寻找最短路径
void simpleBFS() {
    // 5x5的网格，0表示可通行，1表示障碍
    int grid[5][5] = {
        {0, 0, 0, 1, 0},
        {0, 1, 0, 0, 0},
        {0, 1, 0, 1, 0},
        {0, 0, 0, 1, 0},
        {1, 0, 0, 0, 0}
    };
    
    // 方向：上、右、下、左
    int dx[4] = {-1, 0, 1, 0};
    int dy[4] = {0, 1, 0, -1};
    
    // 起点和终点
    int startX = 0, startY = 0;
    int endX = 4, endY = 4;
    
    // 距离数组
    int dist[5][5];
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            dist[i][j] = -1;  // -1表示未访问
        }
    }
    
    queue<pair<int, int>> q;
    
    // 起点入队
    q.push({startX, startY});
    dist[startX][startY] = 0;
    
    cout << "BFS搜索路径:" << endl;
    
    while (!q.empty()) {
        auto current = q.front();
        q.pop();
        
        int x = current.first;
        int y = current.second;
        
        cout << "访问位置: (" << x << ", " << y << "), 距离: " << dist[x][y] << endl;
        
        // 如果到达终点
        if (x == endX && y == endY) {
            cout << "到达终点! 最短距离: " << dist[x][y] << endl;
            break;
        }
        
        // 向四个方向扩展
        for (int i = 0; i < 4; i++) {
            int nx = x + dx[i];
            int ny = y + dy[i];
            
            // 检查边界和障碍物
            if (nx >= 0 && nx < 5 && ny >= 0 && ny < 5 && 
                grid[nx][ny] == 0 && dist[nx][ny] == -1) {
                
                dist[nx][ny] = dist[x][y] + 1;
                q.push({nx, ny});
            }
        }
    }
}

int main() {
    simpleBFS();
    return 0;
}