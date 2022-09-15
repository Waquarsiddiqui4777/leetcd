class Solution {
public:
    int maxArea(vector<int>& height) {
        int m=0,n=height.size();
int i=0,j=n-1;
while(i<j){
int h=min(height[i],height[j]);
m=max(m,(j-i)*h);
if(height[i]<height[j])
i++;
    else if(height[i]==height[j]){
        i++;
        j--;
    }
else
j--;
}
return m;
    }
};