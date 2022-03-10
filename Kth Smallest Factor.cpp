// link - https://practice.geeksforgeeks.org/problems/kth-smallest-factor2345/1#

int kThSmallestFactor(int N , int K) {
		int count =0;
        vector<int> ans;
        int ans1=0;
        
        for (int i=1; i<=N; i++){
		
            if (N%i==0){
                
                ans.push_back(i);
                count++; 
            }
        }
        
        if ((K-1)<count){
            ans1 = ans[K-1];
        }
        
        else {
            ans1= -1;
        }
        
        return ans1;


 		}
};
