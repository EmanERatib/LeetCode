class Solution {
public:
    bool isAnagram(string s, string t) {

  // Check if the lengths of the two strings are equal
    if (s.length() != t.length()) {
        return false;
    }
    
    // Create an unordered map to count the occurrence of each character in s
    unordered_map<char, int> char_count;
    for (char c : s) {
        char_count[c]++;
    }
    
    // Decrement the count for each character in t
    for (char c : t) {
        if (char_count[c] > 0) {
            char_count[c]--;
        } else {
            return false;
        }
    }
    
    return true;
    }
};
  //Time Complexity : O(n)
  //Space Complexity :O(n)