class Solution {
public:
    int ladderLength(string beginWord, string endWord, vector<string>& wordList) {
        queue<pair<string , int>>q;
        q.push({beginWord , 1});

        unordered_set<string>st(wordList.begin() , wordList.end());
        //kyoki q me beginWord insert kr chuke hai to 
        //i should erase it from dictionary or set
        st.erase(beginWord);

        //main traversal ka logic

        while(!q.empty()){
            pair<string , int>frontPair = q.front();
            q.pop();

            string frontString = frontPair.first;
            int frontDistance = frontPair.second;
             
            //check if front ki node is the endWord or not
            if(frontString == endWord){
                return frontDistance;
            }else{
                //toh ab change krne chlte h
                for(int index =0;index < frontString.length();index++){
                    char originalChar = frontString[index];
                    for(char ch = 'a' ; ch <= 'z' ; ch++){
                        frontString[index] = ch;
                        //check if the new string is there in the dictionary or not
                        if(st.find(frontString) != st.end()){
                            //valid string
                            q.push({frontString , frontDistance + 1});
                            st.erase(frontString);
                        }
                    }
                    //backtrack
                    frontString[index] = originalChar;
                }
            }

        }
        return 0;
    }
};