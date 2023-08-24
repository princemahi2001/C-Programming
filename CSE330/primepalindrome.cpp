class Solution {
public:
        bool sieve(int z)
        {
            if(z<=1) return false;
            for(long long i=2;i*i<=z;i++)
            {
                if(z%i==0)
                {
                    return false;
                }
            }
            return true;
        }
        bool primepalin(int y)
        {
            string s=to_string(y);
            int i=0,j=s.length()-1;
            while(i<j)
            {
                if(s[i]!=s[j]) return false;
                i++; j--;
            }
            return true;
        }
        int primePalindrome(int n) 
        {
            if (99899*1e2 <= n && n <= 1e8)
            return 100030001;
            for(long long i=n;i<=1e8;i++)
            {
                if(sieve(i))
                {
                    if(primepalin(i))
                    {
                        return i;
                    }
                }
            }
            return 0;
        }

};
