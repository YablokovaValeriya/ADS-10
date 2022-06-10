// Copyright 2022 NNTU-CS
#include  <iostream>
#include  <fstream>
#include  <locale>
#include  <cstdlib>
#include  "tree.h"

std::vector<char> getCombinationsByNumber(Tree tree, int number) {
  if (number > combinations.size()) {
    return {};
  }
  std::vector<char> result;
  Node current = combinations[number-1];
  while (current.parent) {
    result.push_back(current.symb);
    current = *current.parent;
  }
  std::reverse(result.begin(), result.end());
  return result;
}

std::vector<char> getPerm(const Tree& tree, int n) {
  return Tree(tree).getCombinationsByNumber(tree, n);
}

