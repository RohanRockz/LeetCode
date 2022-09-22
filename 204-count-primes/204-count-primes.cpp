//Sieve of Erostothanes to be used..Learned new algo through this program.
class Solution {
public:
    int countPrimes(int n) {
      vector<bool> seen(n,false);
        int ans=0;
        for(int i=2;i<n;i++){
            if(seen[i]){
                continue;
            }
            ans++;
            for(long int j=(long int) i*i;j<n;j=j+i){
                seen[(int)j]=true;
            }
        }
        return ans;
    }
};