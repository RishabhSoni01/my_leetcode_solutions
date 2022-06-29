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
    Node* dfs(Node* curr,unordered_map<Node*,Node*> &m){
        Node * clone=new Node(curr->val);
        m[curr]=clone;
        vector<Node*> neighbor;
        for(auto it:curr->neighbors){
            if(m.find(it)!=m.end()){
                neighbor.push_back(m[it]);
            }
            else{
                neighbor.push_back(dfs(it,m));
            }
        }
        clone->neighbors=neighbor;
        return clone;
    }
    Node* cloneGraph(Node* node) {
        if(node ==NULL){
            return NULL;
        }
        unordered_map<Node*,Node*> m;
        if(node->neighbors.size()==0){
            Node* clone = new Node(node->val);
            return clone;
        }
        return dfs(node,m);
    }
};