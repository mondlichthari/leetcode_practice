/*
Given a string s of zeros and ones, return the maximum score after splitting the string into two non-empty substrings (i.e. left substring and right substring).

The score after splitting a string is the number of zeros in the left substring plus the number of ones in the right substring.

 

Example 1:

Input: s = "011101"
Output: 5 
Explanation: 
All possible ways of splitting s into two non-empty substrings are:
left = "0" and right = "11101", score = 1 + 4 = 5 
left = "01" and right = "1101", score = 1 + 3 = 4 
left = "011" and right = "101", score = 1 + 2 = 3 
left = "0111" and right = "01", score = 1 + 1 = 2 
left = "01110" and right = "1", score = 2 + 1 = 3

*/

//my answer;O(n^2)
class Solution {
public:
    int maxScore(string s) {
        int o;
        int n=s.size();
        int m=0;
        for(int o=0;o<n-1;o++)
        {
            int a=0,b=0;
            for(int i=0;i<=o;i++)
            {
                if(s[i]=='0')a++;
            }
            for(int j=o+1;j<n;j++)
            {
                if(s[j]=='1')b++;
            }
            m=max(m,a+b);
        }
        return m;
    }
};
//copilot answer;O(n)
class Solution {
public:
    int maxScore(string s) {
        int totalOnes = 0;
        for (char c : s) if (c == '1') totalOnes++;

        int leftZeros = 0, rightOnes = totalOnes, maxScore = 0;
        for (int i = 0; i < s.size() - 1; i++) {
            if (s[i] == '0') leftZeros++;
            else rightOnes--;
            maxScore = max(maxScore, leftZeros + rightOnes);
        }
        return maxScore;
    }
};
