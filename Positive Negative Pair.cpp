// link - https://practice.geeksforgeeks.org/problems/positive-negative-pair5209/1#
class Solution{
  public:
    
    vector <int> findPairs(int arr[], int n) 
    {
         vector<int>ans;
       unordered_set<int>s;
      
       for(int i=0;i<n;i++){
           
           int xc;
           if(s.find(-1*arr[i])!=s.end()){
               
               
                 ans.push_back(min(-1*arr[i],arr[i]));
                ans.push_back(max(-1*arr[i],arr[i]));
           }
           else{
               s.insert(arr[i]);
           }
       }
       return ans;
        
        
    }
};
