int strStr(string haystack, string needle) {
    int n = needle.length();
    if (n == 0) {return 0;}
    int reset[n];
    reset[0] = -1;
    int i = 0;
    int j = -1;
    while (i < n) {
        while (j >= 0 and needle[i] != needle[j]) {
            j = reset[j];
        }
        i++;
        j++;
        if (i == n) {break;}
        reset[i] = j;
    }
    i = 0;
    j = 0;
    while (i < haystack.length()) {
        while (j >= 0 and haystack[i] != needle[j]) {
            j = reset[j];
        }
        i++;
        j++;
        if (j == needle.length()) {return i - j;}
    }
    return -1;
}