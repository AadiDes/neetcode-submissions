/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> neighbors;
    Node() {
        val = 0;
        neighbors = vector<Node*>();
    }
    Node(int _val) {
        val = _val;
        neighbors = vector<Node*>();
    }
    Node(int _val, vector<Node*> _neighbors) {
        val = _val;
        neighbors = _neighbors;
    }
};
*/

class Solution {
   public:
    Node* cloneGraph(Node* node) {
        map<Node*, Node*> mapping;
        return dfs(node, mapping);
    }

    Node* dfs(Node* node, map<Node*, Node*>& mapping) {
        if (node == nullptr) return nullptr;
        if (mapping.count(node)) return mapping[node];

        Node* copy = new Node(node->val);
        mapping[node] = copy;
        for (Node* nei : node->neighbors) copy->neighbors.push_back(dfs(nei, mapping));
        return copy;
    }
};
