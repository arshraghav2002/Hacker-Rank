class Solution {
public:
    int firstBadVersion(int n) {
        
        long long int i = 0;
        long long int len = n-1;
        
        while(i<=len){
            long long int mid = (i+len)/2;
            
            if(isBadVersion(mid)){
                len = mid-1;
            }
            
            if(!isBadVersion(mid)){
                i = mid+1;
            }
            
        }
      
       
        
        return i;
    }
};
