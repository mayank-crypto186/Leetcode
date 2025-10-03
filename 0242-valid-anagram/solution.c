bool isAnagram(char* s, char* t) {
    int l1=strlen(s);
    int l2=strlen(t);
    if(l1!=l2)return false;

    int c[26]={0};
    for(int i=0;i<l1;i++){
        c[s[i]-'a']++;
        c[t[i]-'a']--;
    }
    for(int i=0;i<26;i++){
        if(c[i]!=0)return false;
    }
    return true;
}
