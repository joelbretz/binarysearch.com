bool overlap(int s0, int e0, int s1, int e1) {
    return ((s0<e1) && (s1<e0));
}

bool solve(vector<int>& rect0, vector<int>& rect1) {
   if( overlap(rect0[0], rect0[2], rect1[0], rect1[2]) &&
       overlap(rect0[1], rect0[3], rect1[1], rect1[3]))
       return true;
   
   return false;

