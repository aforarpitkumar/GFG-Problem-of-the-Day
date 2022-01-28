// link - https://practice.geeksforgeeks.org/problems/1s-complement2819/1

class Solution{ 
public:
    string onesComplement(string S,int N){
        //code here
        
        //string temp =""; 
        
        for (int i=0; i<S.length(); i++){
            
            if (S[i]=='1'){
                
                S[i]= '0';
                
            }
            
            else {
                S[i]= '1';
            }
        }
        
        return S;
        
    }
};
