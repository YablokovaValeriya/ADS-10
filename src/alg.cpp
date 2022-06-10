// Copyright 2022 NNTU-CS
#include  <iostream>
#include  <fstream>
#include  <locale>
#include  <cstdlib>
#include  "tree.h"В

std::vector<char> getPerm(const Tree& tree, int n) {
  return Tree(tree).getCombinationsByNumber(tree, n);
}
