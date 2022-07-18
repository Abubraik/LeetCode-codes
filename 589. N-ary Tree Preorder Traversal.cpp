/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    vector<int> res;

    vector<int> preorder(Node* root) {
        if (root == NULL)
            return res;
        Reshelper(root);
        return res;
    }
    void Reshelper(Node* node) {
        if (node == NULL) return;
        res.push_back(node->val);
        for (Node* child : node->children) {
            Reshelper(child);
        }
    }
};