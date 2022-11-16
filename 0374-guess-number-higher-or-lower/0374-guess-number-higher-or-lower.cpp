/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
public:
    int guessNumber(int n) {
        int max=n;
        int min=1;
        while(true){
            int num=(max-min)/2+min;
            int ans=guess(num);
            if(ans==0){
                return num;
            }
            else if(ans==1)
            {
                min=num+1;
            }
            else{
                max=num-1;
            }
        }
        }

};