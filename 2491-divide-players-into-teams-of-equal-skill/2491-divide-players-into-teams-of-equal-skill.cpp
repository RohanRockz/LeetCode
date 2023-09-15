class Solution {
public:
    long long dividePlayers(vector<int>& skill) {
        sort(skill.begin(),skill.end());
        int i=0;
        int j=skill.size()-1;
        long long sum=skill[i]+skill[j];
        long long product=0;
        while(i<=j){
            long long curr=skill[i]+skill[j];
            if(curr!=sum){
                return -1;
            }
            product+=(skill[i]*skill[j]);
            i++;
            j--;
        }
        return product;
    }
};