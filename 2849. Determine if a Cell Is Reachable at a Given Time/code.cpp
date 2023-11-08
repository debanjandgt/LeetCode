class Solution {
public:
    bool isReachableAtTime(int sx, int sy, int fx, int fy, int t) {
        if(sx == fx && sy == fy)
        return t>1 || t== 0;

        int height=abs(fy-sy);
        int width=abs(fx-sx);

        int time=abs(height-width);

        int totalTime=min(height,width)+time;

        if(totalTime <= t)
        return true;
        else
        return false;
    }
};
