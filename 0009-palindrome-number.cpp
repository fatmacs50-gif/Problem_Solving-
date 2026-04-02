class Solution {
public:
    bool isPalindrome(int x) {
        if (x<0) return  false ;
        
         string resl  = to_string (x);
           int k  =resl .length()-1;

         for (int i=0 ; i<  resl .length(); i++)
         {

         if ( resl[i] !=resl [k]) return  false  ; 
             k--;

         }

      return true  ;

    }
};
