#include <iostream>
#include <vector>
#include <queue>
using namespace std;

// 简单的BFS实现
void bfs(int start, vector<vector<int>>& graph, vector<bool>& visited) {
    queue<int> q;
    
    // 将起始节点加入队列并标记为已访问
    q.push(start);
    visited[start] = true;
    
    cout << "BFS遍历顺序: ";
    
    while (!q.empty()) {
        int current = q.front();
        q.pop();
        
        // 处理当前节点（这里简单输出）
        cout << current << " ";
        
        // 遍历当前节点的所有邻居
        for (int neighbor : graph[current]) {
            // 如果邻居节点未被访问过
            if (!visited[neighbor]) {
                visited[neighbor] = true;  // 标记为已访问
                q.push(neighbor);          // 加入队列
            }
        }
    }
    cout << endl;
}

int main() {
    // 图的邻接表表示
    // 节点0,1,2,3,4,5
    vector<vector<int>> graph = {
        {1, 2},     // 节点0的邻居
        {0, 3, 4},  // 节点1的邻居
        {0, 5},     // 节点2的邻居
        {1},        // 节点3的邻居
        {1},        // 节点4的邻居
        {2}         // 节点5的邻居
    };
    
    vector<bool> visited(graph.size(), false);
    
    // 从节点0开始BFS
    bfs(0, graph, visited);
    
    return 0;
}