bool isSubsequence(char* s, char* t) {
    int l1=strlen(s);
    int l2=strlen(t);
    if(l1==0)return true;
    if(l2==0)return false;
    int i=0;
    for(int j=0;j<l2;j++){
        if(t[j]==s[i]){
            i++;
            if(i==l1)return true;
        }
    }
    return false;
}
