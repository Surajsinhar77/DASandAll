#include<bits/stdc++.h>
#include"./Tries.h"
using namespace std;

int main(){
    Tries * ob = new Tries();
    string word;
    // cout<<"Enter the Word to Insert : ";
    // cin>>word;
    // ob->insertWord(word);
    // cout<<endl;
    
    // string word1;
    // cout<<"Enter the Word to Search : ";
    // cin>>word1;
    ob->insertWord("a");
    ob->insertWord("ab");
    ob->insertWord("abcd");

    cout<<"This Word is Exist "<< (ob->searching("abcd")? "True" : "False");
    cout<<"This Word is Exist "<< (ob->searching("abc")? "True" : "False");

    return 0;
}