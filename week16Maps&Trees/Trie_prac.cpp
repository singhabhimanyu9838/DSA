#include<iostream>
#include<unordered_map>
using namespace std;


class TrieNode{
 public:
    char data;
    unordered_map<char,TrieNode*>children;
    bool isTerminal;
    TrieNode(char val){
        this->data = val;
        isTerminal = false;
    }
};

void insertWord(TrieNode* root , const string& word , int idx =0){
    if(idx == (int)word.size()){
        root->isTerminal = true;
        return ;
    }

    TrieNode* child;
    char ch= word[idx];
    if(root->children.find(ch) != root->children.end()){
        child = root->children[ch];
    }else{
        child = new TrieNode(ch);
        root->children[ch] = child;
    }
    insertWord(child , word , idx+1);

}

bool searchWord(TrieNode* root , const string& word , int idx =0){
    if(idx == (int)word.size()){
        return root->isTerminal;
    }

    char ch = word[idx];
    TrieNode* child;
    if(root->children.find(ch) != root->children.end()){
        child = root->children[ch];
    }else{
        return false;
    }
    return searchWord(child , word ,idx+1);
}


int main(){
    TrieNode *root = new TrieNode('-');
    insertWord( root,"Ram");
    insertWord( root,"Ears");
    insertWord( root,"Incredible");

    if(searchWord(root , "dRam")){
        cout<<"word found"<<endl;
    }else{
        cout<<"not found";
    }


    return 0;
}