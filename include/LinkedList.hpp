#ifndef LINKEDLIST_HPP
#define LINKEDLIST_HPP

#include <initializer_list>
#include <vector>
#include <memory>

namespace LinkedList {
  class Node;
}
using p_node_t = std::unique_ptr<LinkedList::Node>;

namespace LinkedList {
  class Node {
  public:
    int data;
    p_node_t next;

    Node(int d);
    bool operator ==(const Node& rhs) const;
  };

  bool equal(const p_node_t& list1, const p_node_t& list2);
  p_node_t create(std::initializer_list<int> il);
  std::vector<int> toVector(const p_node_t& head);
}

#endif