class Solution {
public:
    string addBinary(string a, string b) {
        int c = 0;
        int i=a.length()-1;
        int j=b.length()-1;
        string ans = "";
        while (i>=0 || j>=0){
            int x = (i >= 0) ? a[i] - '0' : 0;
            int y = (j >= 0) ? b[j] - '0' : 0;
            int s=x+y+c;
            ans=ans+char((s%2)+'0');
            c=s/2;
            i--;
            j--;
        }
        reverse (ans.begin(),ans.end());
        if (c==1){
            ans = '1' + ans;
        }
        return ans;
    }
};