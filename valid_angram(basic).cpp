class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.length() != t.length()) return false;

        int arr[26] = {0};

        //iterating through the complete strings
        for (int i = 0; i < s.length(); i++) {
             arr[s[i]-'a'] += 1;
            arr[t[i] - 'a'] -= 1;
        }

        // now if the both the arrays are angram then we have 0 in each block again
        for (int check : arr){
            if (check != 0) return false;
        }
        return true;


     }
};
