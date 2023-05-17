/*
 * @lc app=leetcode id=14 lang=cpp
 *
 * [14] Longest Common Prefix
 */

// @lc code=start
class TrieNode{
public:
    char data;
    TrieNode*children[26];
    bool isTerminal;
    int childcount;

    TrieNode(char ch)
    {
        data = ch;
        for(int i=0; i<26; i++)
        {
            children[i] = NULL;
        }
        childcount = 0;
        isTerminal = false;
    }
};

class Trie {
public:
    TrieNode*root; 
    Trie(char ch) 
    {
        root = new TrieNode(ch);
    }
    
    void insertWord(TrieNode* root ,string word) {
        if(word.length()== 0)
        {
            root->isTerminal = true;
            return ;
        }

        int index = word[0]-'a';
        TrieNode*child;

        if(root->children[index] != NULL)
        {
            child = root->children[index];
        }
        else 
        {
            child = new TrieNode(word[0]);
            root->children[index] = child;
            root->childcount++;
        }

        insertWord(child,word.substr(1));
    }

    void insert(string word) {
        insertWord(root,word);
    }

    void lca(string str , string &ans)
    {
        for(int i = 0 ; i<str.length() ; i++)
        {
            char ch = str[i];

            if(root->childcount == 1)
            {
                int index = ch - 'a';
                root = root->children[index];
                ans.push_back(ch);
            }
            else
            {
                break;
            }

            if(root->isTerminal)
            {
                break;
            }
        }
    }
};

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        
        string ans = "";

        Trie * t = new Trie('\0');

        for(int i = 0 ; i<strs.size();i++)
        {
            if(strs[i] == "") return ans;
            t->insert(strs[i]);
        }

        string first = strs[0];
        t->lca(first , ans);

        return ans;
    }
};
// @lc code=end

