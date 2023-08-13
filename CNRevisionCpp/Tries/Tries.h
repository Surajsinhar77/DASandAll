#include<bits/stdc++.h>
// #include<string>
using namespace std;

class TriesNode{
    public:
    char data;
    TriesNode ** child;
    bool finish;
    
    TriesNode(char a){
        this->data = a;
        TriesNode ** newArray = new TriesNode*[26];
        this->child = newArray;

        for(int i = 0; i<26; i++){
            this->child[i] = nullptr;
        }
        this->finish = false;
    }
};


class Tries{
    public:
    TriesNode * root;
    
    Tries(){
        this->root = new TriesNode('\0');
    }
    private:
    void insertWordPrivate(TriesNode * root ,string word){
        if(word.size() == 0){
            root->finish = true;
            return;
        }

        int index = word[0]-'a';
        if(root->child[index] == nullptr){
            TriesNode * newNode = new TriesNode(word[0]);
            root->child[index] = newNode;
        }

        insertWordPrivate(root->child[index], word.substr(1));
    }

    // void privateDisplay(){
    //     if()
    // }
    bool searchPrivate(TriesNode * root , string word){
        if(word.size() == 0){
            return root->finish;
        }

        int index = word[0]-'a';
        if(root->child[index] != nullptr){
            if(root->child[index]->data == word[0]){
                return searchPrivate(root->child[index],word.substr(1));
            }
        }
        return false;
    }

    public:
    void  insertWord(string word){
        insertWordPrivate(root, word);
        // return root;
    }

    bool searching(string word){
        return searchPrivate(root, word);
    }

    // void display(TriesNode * root ){
    //     if(root == NULL);
    // }
};