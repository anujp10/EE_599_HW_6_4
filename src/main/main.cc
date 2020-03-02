#include <iostream>
#include "src/lib/solution.h"

int main()
{
    std::map<int, std::unordered_set<int>> vertices{
        {0, {1}},
        {1, {2, 3}},
        {2, {0}},
        {3, {4, 6, 2}},
        {4, {}},
        {5, {6}},
        {6, {}}};

    Graph g(vertices);

    std::vector <int> result = g.DFS_ALL();

    for (auto &n : result)
        std::cout << n << " ";
    std::cout << std::endl;
}
