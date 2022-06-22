bool solve(string s0, string s1) {
    // s0 h e l l o
    // s1 h e l o
    // s0 - char = s1
    if (s0.length() - 1 != s1.length()) 
        return false;

    // "2 pointer" approach
    int u = 0, v = 0, skip = 0;
    while (v < s1.length()) {
        if (s0[u] == s1[v]) {
            ++u, ++v;
        } else if (s0[u + 1] == s1[v]) {
            u+=2; v+=1;
            ++skip;
        }
        else {
            return false;
        }
    }
    if (skip > 1) return false;

    return true;
}
