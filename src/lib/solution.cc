#include "solution.h"

void Graph::DFS_node(int node, std::vector<bool> &vertices_visited, std::vector<int> &result)
{
  if (vertices_visited[node] != true)
  {
    vertices_visited[node] = true;
    result.push_back(node);
  }

  for (auto it = v_.at(node).begin(); it != v_.at(node).end(); it++)
  {
    if (vertices_visited[*it] != true)
      DFS_node(*it, vertices_visited, result);
  }
}

std::vector<int> Graph ::DFS_ALL()
{
  std::vector<bool> vertices_visited(v_.size(), false);
  std::vector<int> result;

  if (v_.size() < 1)
    return result;

  for (unsigned int i = 0; i < v_.size(); i++)
    DFS_node(i, vertices_visited, result);

  return result;
}