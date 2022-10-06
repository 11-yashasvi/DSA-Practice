class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        int i=0;
        int n=0;
        n=s.size();
        char a[n];
        for(i=0;i<n;i++)
        {
            a[indices[i]]=s[i];
        }
        for(i=0;i<n;i++)
        {
            s[i]=a[i];
        }
    return s;    
    }
};
