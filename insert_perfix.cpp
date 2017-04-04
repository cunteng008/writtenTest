#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
int insert(vector<string>& words,string word);  //插入
vector<string> findPerfixWords(const vector<string>& words,string perfix);

int main(){
    int n,m;
    vector<string> words;
    string word;
    cin>>n>>m;
    for(int i=0;i<n;i++){
        cin>>word;
        words.push_back(word);
    }

    string order;
    vector<string> ws;
    for(int i=0;i<m;i++){
        cin>>order;
        if(order=="insert"){
            cin>>word;
            cout<<insert(words,word)<<endl;
        }
       
        if(order == "perfix"){
           cin>>word;
           ws = findPerfixWords(words,word);
           for(auto w:ws){
               cout<<w<<endl;
           }
        }

    }
    
    return 0;
}

int insert(vector<string>& words,string word){
    vector<string>::iterator it;
    it = find(words.begin(),words.end(),word);
    if(it!=words.end()){
       
        return 1;
    }
    words.push_back(word);
    return 0;
}

vector<string> findPerfixWords(const vector<string>& words,string perfix){
    vector<string> ws;
    unsigned int len = perfix.size();
    for(string w:words){
        if(w.size()<len){
            continue;
        }
        string str = w.substr(0,len);
        if(str==perfix){
            ws.push_back(w);
        }
    }
    return ws;
}