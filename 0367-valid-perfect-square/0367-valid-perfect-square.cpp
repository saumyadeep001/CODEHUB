// class Solution {
// public:
//     bool isPerfectSquare(int num) {
//       int i = 1;
//       while(num > 0){
//           num -= i;
//           i += 2;
//           if(!num) return true;     
//       }  
//         return false;
//     }
// };

class Solution {
public:
      bool isPerfectSquare(int num) {
        long int i = 1;
        for(;i*i<num;i++);
        return i*i==num;
    }
};