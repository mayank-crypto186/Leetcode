class Solution {
public:
    string reversePrefix(string word, char ch) {
        stack<char>s;
        string ans;
        int i=-1;
        i=word.find(ch);
        if(i==-1){
            return word;
        }
        int c=0;
        for(int i=0;i<word.size();i++){
            if(word[i]==ch){
                s.push(ch);
                c+=1;
                break;
            }
            s.push(word[i]);
            c+=1;
        }
        while(!s.empty()){
            ans.push_back(s.top());
            s.pop();
        }
        ans+=word.substr(c);
        return ans;

    }
};
