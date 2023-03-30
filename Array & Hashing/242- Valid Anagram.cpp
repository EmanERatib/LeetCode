class Solution {
public:
    bool isAnagram(string s, string t) {
   if(s.size() != t.size())
   return false;

   unordered_map <char,int>mp;
   for(int i=0; i< s.size();i++){
      
      mp[s[i]]++;
      mp[t[i]]--;
   }
   for( int i=0; i<mp.size();i++){

        if(mp[i] != 0)
         return false;
   }
   return true;
   
   //Time Complexity : O(n)
   //Space Complexity :O(n)


    }
};

/*
// Sorting
class Solution {
public:
    bool isAnagram(string s, string t) {
   if(s.size() != t.size())
   return false;


  sort(s.begin(),s.end());
   sort(t.begin(),t.end());
   return s==t;

  //  Time Complexity : O (n log n)
  //  Space Complexity : O (1)

}
};
*/