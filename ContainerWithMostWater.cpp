class Solution {
public:
    int maxArea(vector<int> &heights) 
    {
        int tempArea = 0, mxArea = 0; // Greedily form your answer
        int i = 0, j = heights.size()-1; // 2 Pointers
        while(i<j) // base case - till we reach the middle
        {
            tempArea = (j-i)*(min(heights[i], heights[j])); // j-i is length and second part is breadth. Compute the area
            mxArea = max(tempArea, mxArea); // Greedy Step
            if(heights[i] < heights[j]) // if h[i] < h[j] will h[i] be useful for us in future ? No. So leave it behind do i++ ( moving in rightward direction )
                i++;
            else // Similarly do this for j ( moving in leftward direction )
                j--;
        }
        return mxArea; // 2 Pointer approach - Time O(n) Space O(1)
    }
};