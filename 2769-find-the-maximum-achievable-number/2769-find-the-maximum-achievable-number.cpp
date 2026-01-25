class Solution {
public:
    int theMaximumAchievableX(int num, int t) {
        for(int i = 0; i<t; i++){
            num++;
        }

        int x = num + t;
        return x;
    }
    
};