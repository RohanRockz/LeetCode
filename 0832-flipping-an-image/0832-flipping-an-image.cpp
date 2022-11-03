//Use of Bitwise operator which gives 1 for same values and 0 for different values.
class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        for(int i=0;i<image.size();i++){
            reverse(image[i].begin(),image[i].end());
            for(int j=0;j<image[i].size();j++){
                image[i][j]^=1;
            }
        }
        return image;
    }
};