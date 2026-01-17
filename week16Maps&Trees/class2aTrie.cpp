#include<iostream>
#include<unordered_map>
using namespace std;

class TrieNode{
    public:
        char value;
        unordered_map<char, TrieNode*>childdren;
        bool isTerminal;

        TrieNode(char data){
            value = data;
            isTerminal = false;
        }
};

void insertIntoTrie(TrieNode* root , string word , int idx =0){
    //base case - ek time aisa aaega , jb aapki string empty ho jayegi
    if(idx == (int)word.size()){
        root->isTerminal = true;
        return;
    }

    //1 case solve krna h
    //1 character ko tie me insert krdata hu
    char ch = word[idx];
    TrieNode* child;

    //present h toh wha jao 
    //absent h toh create krdo
    if(root ->childdren.count(ch) == 1){
        child = root->childdren[ch];
    }else{
        //absent
        child = new TrieNode(ch);
        //link
        root->childdren[ch] = child;
    }

    //baaki recursion
    insertIntoTrie(child , word,idx+1);
}

bool searchIntoTrie(TrieNode* root , string word){
    //base case
    //check last character terminal h ya nhi
    if(word.length()==0){
        //iska mtlb root me last character pada hua h
        if(root->isTerminal == true){
            return true;
        }else{
            return false;
        }
    }

    //1 case main solve krunga
    char ch = word[0];
    TrieNode* child;

    if(root->childdren.find(ch) != root->childdren.end()){
        //present
        child = root->childdren[ch];
    }else{
        //absent
        return false;
    }

    //baaki recursion 
    bool recursionKaAns = searchIntoTrie(child , word.substr(1));
    return recursionKaAns;
}

void deleteWord(TrieNode* root , string word){
    //base case
    //ek time aisa aayega , jb word empty hoga and root me last character hoga
    if(word.length() == 0){
        cout<<"word deleted"<<endl;
        root->isTerminal = false;
        return ;
    }

    //1 case main solve krunga
    char ch = word[0];
    TrieNode* child;

    if(root->childdren.find(ch) != root->childdren.end()){
        //present
        child = root->childdren[ch];
    }else{
        //absent
        return;
    }
    //baaki recursion
    deleteWord(child , word.substr(1));
}

int main(){
    TrieNode* root = new TrieNode('-');
    insertIntoTrie(root , "cover");
    insertIntoTrie(root , "car");
    insertIntoTrie(root , "care");
    insertIntoTrie(root , "snake");
    insertIntoTrie(root , "fivefoot");
    insertIntoTrie(root , "extremlywell");
    insertIntoTrie(root , "coward");
    insertIntoTrie(root , "selffabsessed");
    insertIntoTrie(root , "tag");
    insertIntoTrie(root , "take");
    insertIntoTrie(root , "took");

    bool ans = searchIntoTrie(root , "took"); 
    if(ans){
        cout<<"Word found"<<endl;
    }else{
        cout<<"not found"<<endl;
    }

    deleteWord(root, "took");

    bool ans1 = searchIntoTrie(root , "took"); 
    if(ans1){
        cout<<"Word found"<<endl;
    }else{
        cout<<"not found"<<endl;
    }

    return 0;
}