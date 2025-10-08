int strStr(char* haystack, char* needle) {
    int i;
    int j;
    int find;
    i = 0;
    j = 0;
    while (haystack[i])
    {
        if (haystack[i] == needle[j])
        {
            find = i;
            while (needle[j]){
                 if (haystack[i] != needle[j]){
                    i = find;
                    j = 0;
                    break;
                }
                else{
                    i++;
                    j++;
                }
            }
            if (needle[j] == '\0')return  (find);
        }
        i++;
    }
    return  (-1);
}
