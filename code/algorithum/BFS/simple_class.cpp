#include <iostream>
#include <queue>
#include <vector>
using namespace std;

// 最简化的BFS模板
void bfsTemplate(int start, vector<vector<int>>& graph) {
    int n = graph.size();
    vector<bool> visited(n, false);
    queue<int> q;
    
    q.push(start);
    visited[start] = true;
    
    while (!q.empty()) {
        int node = q.front();
        q.pop();
        
        cout << node << " ";  // 处理节点
        
        for (int neighbor : graph[node]) {
            if (!visited[neighbor]) {
                visited[neighbor] = true;
                q.push(neighbor);
            }
        }
    }
}

int main() {
    // 创建图
    vector<vector<int>> graph = {
        {1, 2},
        {0, 3},
        {0, 3},
        {1, 2}
    };
    
    cout << "BFS遍历结果: ";
    bfsTemplate(0, graph);
    
    return 0;
}