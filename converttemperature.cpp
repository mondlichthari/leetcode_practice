class Solution {
public:
    vector<double> convertTemperature(double celsius) {
        vector<double> ans(2);
        ans[0]= celsius+273.15;
        ans[1]=1.80*celsius+32.00;
        return ans;
    }
};
