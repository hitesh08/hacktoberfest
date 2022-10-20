    vector<int> levelOrder(Node* node)
    {
        vector<int> lvlOrder;
        if(node==NULL) return lvlOrder;
        
        queue<Node*> q;
        q.push(node);
        
        while(q.empty() != true){
            Node* curr = q.front();
            lvlOrder.push_back(curr->data);
            q.pop();
            if(curr->left != NULL) q.push(curr->left);
            if(curr->right != NULL) q.push(curr->right);
        }
        return lvlOrder;
      
    }
