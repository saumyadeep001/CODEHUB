                //method 1: by pow inbuilt function 

//class Solution {
//public:
    //double myPow(double x, int n) {
     //   return pow(x,n);
 //   }
//};



                 //method 2 : by binary exponertiation


class Solution {
public:
    
    
    double solve(double x, long n){
        
        if(n==0)
            return 1;
        
        if(n<0)
            return solve(1/x , n); 
            
        if(n%2 == 0)
            return solve(x*x , n/2);
        
        else
            return solve(x*x , (n-1)/2);
}
 
    double myPow(double x, int n) {
        
        return pow(x,(long)n);
        
    }
};