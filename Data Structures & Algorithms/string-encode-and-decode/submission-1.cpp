class Solution {
public:
    string encode(vector<string>& strs) {
        string new_str = "";
        for (auto s : strs) {
            new_str += to_string(s.length()) + "#" + s;
        }
        return new_str;
    }

    vector<string> decode(string s) {
        vector<string> new_list;
        string count = "";
        int i = 0;

        while (i < s.length()) {
            if (s[i] != '#') {
                count += s[i];
                i++;
            } else {
                new_list.push_back(s.substr(++i, stoi(count)));
                i += stoi(count);
                count = "";
            }
        }
        return new_list;
    }
};
