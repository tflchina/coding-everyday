// Forward declaration of isBadVersion API.
bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int l=1;
        int r=n;
        while(l<r){
            int m = l+ ((r-l)>>1);
            if(isBadVersion(m)) r=m;
            else l=m+1;
        }
        return l;        
    }
};
