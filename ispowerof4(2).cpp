class Solution {
public:
    bool isPowerOfFour(int n) {
        if(n<=0) return false;
        if((n & (n-1)) != 0) return false;
	//here 0xAAAAAAAA is a hexadecimal representation
	// A-1010

        if((n & (0xAAAAAAAA))==0)
            return true;
        else 
            return false;
        
    }
};
