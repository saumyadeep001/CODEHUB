class Solution {
public:
    int furthestDistanceFromOrigin(string moves) {
        int n=moves.length();
        
        int l=0, r=0;
        for(int i=0;i<n;i++){
            if(moves[i]=='L' || moves[i]=='_') l--;
            else l++;
            
            
            if(moves[i]=='R' || moves[i]=='_')  r++;
            else  r--;
            
        }
        
        if(l<0) l *= -1;
        if(r<0) r *= -1;
		
        return max(l,r);
    }
};

// int l=0,r=0,blank=0;
//         int n=moves.size();
//         for(int i=0;i<n;i++)
//         {
//             if(moves[i]=='L')
//             {
//                 l++;
//             }else if(moves[i]=='R')
//             {
//                 r++;
//             }else{
//                 blank++;
//             }
//         }
//         if(l==r)
//         {
//             return blank;
//         }else if(l<r)
//         {
//             return r-l+blank;
//         }else {
//             return l-r+blank;
//         }