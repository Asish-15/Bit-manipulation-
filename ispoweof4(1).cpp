class Solution {
public:
    bool isPowerOfFour(int n) {
        if(n<=0) return false;

	// using the below condition we are checking the given n is power of 2 or not  
	// every power of 4 is a power of 2

        if((n & (n-1)) != 0) return false;
	
	// __builtin_ctz is an inbuilt function that returns continous trailing zeroes

        int z= __builtin_ctz(n);
        if(z%2==0)
            return true;
        return false;
        
    }
};