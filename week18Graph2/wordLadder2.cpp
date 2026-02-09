// User function Template for C++

class Solution {
  public:
    vector<vector<string>> findSequences(string beginWord, string endWord,
                                         vector<string>& wordList) {
        vector<vector<string>>ans;
        queue<pair<vector<string> , int>>q;
        q.push({{beginWord} , 1});
        unordered_set<string>st(wordList.begin() , wordList.end());
        int prevLevel = -1;
        vector<string>tobeRemoved;
        while(!q.empty()){
            auto node = q.front();
            auto currSeq = node.first;
            auto currLevel = node.second;
            auto currString = currSeq[currSeq.size() - 1];
            q.pop();

            if(currLevel != prevLevel){
                for(auto s: tobeRemoved)st.erase(s);
                tobeRemoved.clear();
                prevLevel = currLevel;
            }

            if(currString == endWord){
                ans.push_back(currSeq);
            }

            for(int index = 0 ; index<currString.size();index++){
                char originalChar = currString[index];
                for(char ch = 'a';ch<= 'z';ch++){
                    currString[index] = ch;
                    if(st.find(currString) != st.end()){
                        auto temp = currSeq;
                        temp.push_back(currString);
                        q.push({temp , currLevel + 1});
                        tobeRemoved.push_back(currString);
                    }
                }
                currString[index] = originalChar;
            }
        }

        return ans;
        
    }
};