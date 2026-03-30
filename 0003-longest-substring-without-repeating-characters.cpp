class Solution {
public:
    int lengthOfLongestSubstring(string s) {
      int MAX  =0 ; 
        int start =0 ;
 
      unordered_map <char , int > lastpos ;

     for( int end  =0   ; end < s.size () ; end ++)
       {
      char curr = s [end ];
      //  هل العنصر الحالي ظهر قبل كده ولا لاء 
      if ( lastpos.count(curr )    &&  lastpos[curr]  >= start )
      {

    start =   lastpos[curr] +1 ;  //  حركه ناحيه اليمين 


      }


      lastpos[curr] = end ;
      MAX = max( MAX , end - start +1 ) ;



       }
    return MAX ; 
    }
};
