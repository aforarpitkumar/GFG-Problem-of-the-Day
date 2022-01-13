// link - https://practice.geeksforgeeks.org/problems/reverse-first-k-elements-of-queue/1#

queue<int> modifyQueue(queue<int> q, int k) {
    // add code here.
    
    stack <int> st;
    
    for ( int i=0; i<k; i++){
        
        st.push(q.front());
        q.pop();
        
    }
    
    for (int i=0; i<k; i++){
        
        
        q.push(st.top());
        st.pop();
        
    }
    
    for (int i=0; i<q.size()-k; i++){
        
        int temp = q.front();
        q.pop();
        
        q.push(temp);
        
    }
    
    return q;
    
    
    
}
