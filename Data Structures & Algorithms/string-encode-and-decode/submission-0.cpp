class Solution {
public:

    string encode(vector<string>& strs) {
        string ans = "";

        for(string s : strs){
            ans += to_string(s.length());
            ans += '#';
            ans += s;
        }

        return ans;


    }

    vector<string> decode(string s) {
        vector <string> ans;

        for(int i = 0; i < s.length(); ){
            int j = i;
            
            while(s[j] != '#'){
                j++;
            }
            int len = stoi(s.substr(i, j - i));
            string val = s.substr(j + 1, len);
            
            ans.push_back(val);

            i = j + 1 + len;
        }

        return ans;

    }
};
