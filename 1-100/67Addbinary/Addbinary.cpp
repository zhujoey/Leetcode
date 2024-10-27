#include <string>
#include <vector>

class Solution
{
public:
    std::string addBinary(std::string a, std::string b)
    {
        std::vector<char> num1 = {};
        std::vector<char> num2 = {};
        if (a.size() > b.size())
        {
            num1.assign(a.rbegin(), a.rend());
            num2.assign(b.rbegin(), b.rend());
        }
        else
        {
            num2.assign(a.rbegin(), a.rend());
            num1.assign(b.rbegin(), b.rend());
        }

        std::vector<char> ans = {};

        for (int i = 0; i < num1.size(); ++i)
        {
            if (i < num2.size())
            {
                ans.push_back(num1[i] - '0' + num2[i]);
            }
            else
            {
                ans.push_back(num1[i]);
            }
        }

        for (int i = 0; i < ans.size(); ++i)
        {
           if (ans[i] >= '2')
           {
                if (i < ans.size() - 1)
                {
                    ++ans[i + 1];
                }
                else
                {
                    ans.push_back('1');
                }
                ans[i] = ans[i] + '.' - '0';
           }
        }
        
        return std::string (ans.rbegin(), ans.rend());
    }
};