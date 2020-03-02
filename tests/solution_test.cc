#include "src/lib/solution.h"
#include "gtest/gtest.h"
#include <vector>

TEST(DFSShould, DFSReturn)
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

  std::vector<int> actual = g.DFS_ALL();
  std::vector<int> expected = {0, 1, 3, 2, 4, 6, 5};
  EXPECT_EQ(expected, actual);
}

TEST(DFS_ALLShould_1, DFS_ALLReturn_1)
{
  std::map<int, std::unordered_set<int>> vertices{};
  Graph g(vertices);

  std::vector<int> actual = g.DFS_ALL();
  std::vector<int> expected = {};
  EXPECT_EQ(expected, actual);
}