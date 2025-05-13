class Solution {
public:
    int maxArea(vector<int>& height) {
        int n=height.size();
        int maxi=0;
        int i=0;
        int j=n-1;
        while(i<j){
            int a=(j-i)*min(height[i],height[j]);
            maxi=max(maxi,a);
            if(height[i]<height[j]){
                i++;
            }
            else{
                j--;
            }                                                                                                                    }
                                                                                                                             return maxi;
    }
};