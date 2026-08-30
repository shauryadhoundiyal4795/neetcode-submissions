class Solution {
public:
    bool isAnagram(string s, string t) {
        char arr1[s.length()];
        for(int i = 0; i < s.length(); i++){
            arr1[i] = s[i];
        }
        char arr2[t.length()];
        for(int i = 0; i < t.length(); i++){
            arr2[i] = t[i];
        }
        if(s.size() != t.size()){
            return false;
        }else{
            sort(s.begin(), s.end());
            sort(t.begin(), t.end());
            if(s == t){
                return true;
            }
            return false;
        }
    }
};
